#include "game_engine.hpp"

GameEngine::GameEngine() {}

GameEngine::~GameEngine() {
	this->isRunning = false;

	CloseWindow();
}

void GameEngine::init(unsigned int width, unsigned int height, unsigned int fps) {
	InitWindow(width, height, "Game Survival");
	SetTargetFPS(fps);

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

}

void GameEngine::update(float deltaTime) {

}

void GameEngine::render() {
	BeginDrawing();
		ClearBackground(RAYWHITE);

		

	EndDrawing();
}