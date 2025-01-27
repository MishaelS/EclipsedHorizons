#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class CameraController {
public:
	CameraController(Vector2 screenSize, float zoom=1.f, float smooth=0.1f);
	~CameraController();

	float getZoom() const;
	Camera2D getCamera() const;

	void setZoom(float zoom);
	void setDeadZone(float width, float height);
	void update(Vector2 targetPosition);

private:
	void checkAndMoveCamera(Vector2 screenPosition);

	Camera2D camera;
	Rectangle deadZone;
	float zoomLevel;
	float smoothSpeed;
};