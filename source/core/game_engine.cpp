#include "game_engine.hpp"

GameEngine::GameEngine() {}

GameEngine::~GameEngine() {
	this->shutDown();
}

void GameEngine::shutDown() {
	delete this->gameScene;
	
	this->isRunning = false;
	CloseWindow();
}

void GameEngine::init() {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Game Survival");
	SetTargetFPS(FRAME_RATE);

	this->gameScene = new Scene();
	this->gameScene->init();

	this->isRunning = true;
}

void GameEngine::run() {
	TimeManager timeManager(FIXED_TIME_STEP);

	while (this->isRunning && !WindowShouldClose()) {
		timeManager.update();

		this->handleInput();
		while (timeManager.shouldUpdate()) {
			timeManager.reset();
			this->update(timeManager.getDeltaTime());
		}

		this->render();
	}
}

void GameEngine::handleInput() {
	this->gameScene->handleInput();
}

void GameEngine::update(float deltaTime) {
	this->gameScene->update(deltaTime);
}

void GameEngine::render() {
	BeginDrawing();
		ClearBackground(RAYWHITE);

		this->gameScene->render();

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
	EndDrawing();
}