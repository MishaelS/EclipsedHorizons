#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/core/scene.hpp"

class GameEngine {
public:
	GameEngine(unsigned int width, unsigned int height, unsigned int fps);
	~GameEngine();

	bool init();	 // Инициализирует движок и ресурсы
	void shutdown(); // Завершает работу движка и освобождает ресурсы
	void run();		 // Запускает основной игровой цикл

private:
	void handleInput(); // Обрабатывает ввод пользователя
	void update(float deltaTime); // Обновляет состояние игры
	void render(); // Отрисовывает текущее состояние игры

	// Внутренние переменные состояния
	bool isRunning; // Флаг, указывающий, работает ли движок

	// Параметры экрана
	const unsigned int screenWidth;	 // Ширина экрана
	const unsigned int screenHeight; // Высота экрана
	const unsigned int frameRate;	 // Частота кадров

	Scene* scene; // Текущая сцена
};