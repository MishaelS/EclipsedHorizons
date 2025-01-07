#include "../include/core/game_engine.hpp"

GameEngine::GameEngine()
:	isRunning(false),
	screenWidth(ScreenWidth),
	screenHeight(ScreenHeight),
	frameRate(FrameRate) {
	// Конструктор
}

GameEngine::~GameEngine() {
	this->shutdown();
}

void GameEngine::shutdown() {
	// Завершение работы Raylib
    CloseWindow();
    this->isRunning = false;
}

bool GameEngine::initialize() {
	// Инициализация окна Raylib
    InitWindow(this->screenWidth, this->screenHeight, "GameEngine with Raylib");
    SetTargetFPS(this->frameRate);

	this->isRunning = true;

    return true;
}

void GameEngine::run() {
	while (this->isRunning && !WindowShouldClose()) {
        this->processInput();
        this->update(GetFrameTime()); // Получение времени кадра для обновления
        this->render();
	}
}

void GameEngine::processInput() {
	// Обработка ввода игрока
}

void GameEngine::update(float deltaTime) {
	// Обновление мира и игрока
}

void GameEngine::render() {
	BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Hello, Raylib!", 10, 10, 20, DARKGRAY);
	EndDrawing();
}