#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

class CameraController {
public:
	CameraController(Vector2 position, Vector2 center, float deadZone, float smoothness);
	~CameraController();

	void setZoom(float zoom);
	void setPosition(Vector2 position);

	Camera2D getCamera() const;

	void update();

private:
	void movement();

	void checkWorldBounds(unsigned int worldWidth, unsigned int worldHeight);
	Vector2 checkDeadZone();

	Camera2D camera;  // Объект камеры.
	Vector2 position; // Текущая позиция камеры.
	Vector2 target;   // Цель, за которой следует камера.
	Vector2 center;   // Центр камеры.

	float deadZone;   // Мертвая зона (камера не двигается, если цель внутри зоны).
	float smoothness; // Плавность движения камеры.

};
