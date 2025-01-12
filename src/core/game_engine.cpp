#include "../include/core/game_engine.hpp"

GameEngine::GameEngine(unsigned int width, unsigned int height, unsigned int fps)
: screenWidth(width), screenHeight(height), frameRate(fps), isRunning(false) {
	this->scene = new Scene();
}

GameEngine::~GameEngine() {
	this->shutdown();
	delete this->scene;
}

bool GameEngine::init() {
	InitWindow(this->screenWidth, this->screenHeight, "GameEngine with Raylib");
	SetTargetFPS(this->frameRate);

	ChangeDirectory("C:/Dev/projectsCpp/EclipsedHorizons");
	TraceLog(LOG_INFO, "Working directory: %s", GetWorkingDirectory());

	this->scene->init();
	this->isRunning = true;

	return true;
}

void GameEngine::shutdown() {
	this->isRunning = false;
	CloseWindow();
}

void GameEngine::run() {
	while (this->isRunning && !WindowShouldClose()) {
		this->handleInput();
		this->update(GetFrameTime());
		this->render();
	}
}

void GameEngine::handleInput() {
	this->scene->handleInput();
}

void GameEngine::update(float deltaTime) {
	this->scene->update(deltaTime);
}

void GameEngine::render() {
	BeginDrawing();
	this->scene->render();
	EndDrawing();
}