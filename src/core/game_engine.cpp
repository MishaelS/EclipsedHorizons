#include "../include/core/game_engine.hpp"

GameEngine::GameEngine(unsigned int width, unsigned int height, unsigned int fps)
:	isRunning(false),
	screenWidth(width),
	screenHeight(height),
	frameRate(fps) {

	this->scene = new Scene();
	// Конструктор
}

GameEngine::~GameEngine() {
	this->shutdown();
	delete this->scene;
}

void GameEngine::shutdown() {
	// Завершение работы Raylib
    this->isRunning = false;
    CloseWindow();
}

bool GameEngine::initialize() {
	// Инициализация окна Raylib
    InitWindow(this->screenWidth, this->screenHeight, "GameEngine with Raylib");
    SetTargetFPS(this->frameRate);

	// Устанавливаем рабочую директорию в директорию с .exe
     ChangeDirectory("C:/Dev/projectsCpp/EclipsedHorizons");

	// Проверка рабочей директории (для отладки)
    TraceLog(LOG_INFO, "Working directory: %s", GetWorkingDirectory());

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
	// Обработка ввода игрока (например, нажатия клавиш, движения мыши)
	this->scene->processInput();
}

void GameEngine::update(float deltaTime) {
	// Обновление состояния игры (например, перемещение объектов, проверка коллизий)
	this->scene->update(deltaTime);
}

void GameEngine::render() {
	BeginDrawing();
		ClearBackground({  0, 149, 182, 255});

		this->scene->render();

		DrawText("Hello, Raylib!", 10, 10, 20, DARKGRAY);
	EndDrawing();
}