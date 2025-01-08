#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/core/scene.hpp"

class GameEngine {
public:
	GameEngine(unsigned int width, unsigned int height, unsigned int fps);
	~GameEngine();

	bool initialize();	// Инициализация движка
	void shutdown();	// Закрытие игры
	void run();			// Запуск игры

private:
	// Основные этапы игрового цикла
	void processInput();
	void update(float deltaTime);
	void render();

	// Внутренние переменные состояния
    bool isRunning;

    // Параметры экрана
    const unsigned int screenWidth;
    const unsigned int screenHeight;
	const unsigned int frameRate;

	Scene* scene;

};