#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

class GameEngine {
public:
	GameEngine();
	~GameEngine();

	// Инициализация движка
	bool initialize();

	// Закрытие игры
	void shutdown();

	// Запуск игры
	void run();

private:
	// Основные этапы игрового цикла
	void processInput();
	void update(float deltaTime);
	void render();

	// Внутренние переменные состояния
    bool isRunning;

    // Параметры экрана
    unsigned int screenWidth;
    unsigned int screenHeight;
	unsigned int frameRate;

};