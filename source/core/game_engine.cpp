#include "game_engine.hpp"

GameEngine::GameEngine() : stateManager(GameStateManager::getInstance()) {}

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

	this->stateManager = GameStateManager::getInstance();
	this->stateManager.setState(GameState::PLAYING);

	this->gameScene = new Scene();
	this->gameScene->init();

	this->isRunning = true;
}

void GameEngine::run() {
	TimeManager timeManager(FIXED_TIME_STEP);

	while (this->isRunning && !WindowShouldClose()) {
		if (this->stateManager.getState() == GameState::PLAYING) {
			timeManager.update();

			this->handleInput();
			while (timeManager.shouldUpdate()) {
				this->update(timeManager.getFixedTimeStep());
				timeManager.consumeTime();
			}

			this->render();
		}
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
		ClearBackground({ 45,  45,  45, 255});
		this->gameScene->render();
	EndDrawing();
}