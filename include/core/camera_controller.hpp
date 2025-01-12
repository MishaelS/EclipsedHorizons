#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

class CameraController {
public:
	CameraController(Vector2 position, Vector2 center, float deadZone, float smoothness);
	~CameraController();

	void setZoom(float zoom); // Устанавливает уровень масштабирования камеры
	void setPosition(Vector2 position); // Устанавливает позицию камеры

	Camera2D getCamera() const; // Возвращает текущее состояние камеры

	void update(); // Обновляет состояние камеры (вызывается каждый кадр)

private:
	void move(); // Обрабатывает движение камеры
	void checkWorldBounds(unsigned int worldWidth, unsigned int worldHeight); // Проверяет границы мира
	Vector2 checkDeadZone(); // Проверяет, находится ли цель в мертвой зоне

	Camera2D camera;  // Объект камеры.
	Vector2 position; // Текущая позиция камеры.
	Vector2 target;	  // Цель, за которой следует камера.
	Vector2 center;	  // Центр камеры.

	float deadZone;	  // Мертвая зона (камера не двигается, если цель внутри зоны).
	float smoothness; // Плавность движения камеры.
};
