#include "camera_controller.hpp"

CameraController::CameraController(Vector2 screenSize, float zoom, float smooth) {
	this->camera.target = {0.f, 0.f};
	this->camera.offset = {screenSize.x / 2.f, screenSize.y / 2.f};
	this->camera.rotation = 0.f;
	this->camera.zoom = zoom;
	this->zoomLevel = zoom;
	this->smoothSpeed = smooth;

	this->deadZone = {
		screenSize.x / 2.f - 100,
		screenSize.y / 2.f - 100,
		200, 200
	};
}

CameraController::~CameraController() {}

float CameraController::getZoom() const {
	return this->zoomLevel;
}

Camera2D CameraController::getCamera() const {
	return camera;
}

void CameraController::setZoom(float zoom) {
	if (zoom > 0.f) {
		this->camera.zoom = zoom;
		this->zoomLevel = zoom;
	}
}

void CameraController::setDeadZone(float width, float height) {
	this->deadZone.width  = width;
	this->deadZone.height = height;
	this->deadZone.x = this->camera.offset.x - width  / 2.f;
	this->deadZone.y = this->camera.offset.y - height / 2.f;
}

void CameraController::checkAndMoveCamera(Vector2 screenPosition) {
	bool shouldMoveCamera = false;
	Vector2 desiredCameraTarget = this->camera.target;

	if (screenPosition.x < this->deadZone.x) {
		desiredCameraTarget.x -= (this->deadZone.x - screenPosition.x) / this->camera.zoom;
		shouldMoveCamera = true;
	} else if (screenPosition.x > this->deadZone.x + this->deadZone.width) {
		desiredCameraTarget.x += (screenPosition.x - (this->deadZone.x + this->deadZone.width)) / this->camera.zoom;
		shouldMoveCamera = true;
	}

	if (screenPosition.y < this->deadZone.y) {
		desiredCameraTarget.y -= (this->deadZone.y - screenPosition.y) / this->camera.zoom;
		shouldMoveCamera = true;
	} else if (screenPosition.y > this->deadZone.y + this->deadZone.height) {
		desiredCameraTarget.y += (screenPosition.y - (this->deadZone.y + this->deadZone.height)) / this->camera.zoom;
		shouldMoveCamera = true;
	}

	if (shouldMoveCamera) {
		Vector2 smoothedPosition = {
			this->camera.target.x + (desiredCameraTarget.x - this->camera.target.x) * this->smoothSpeed,
			this->camera.target.y + (desiredCameraTarget.y - this->camera.target.y) * this->smoothSpeed
		};

		this->camera.target = smoothedPosition;
	}
}

void CameraController::update(Vector2 targetPosition) {
	Vector2 screenPosition = GetWorldToScreen2D(targetPosition, this->camera);
	this->checkAndMoveCamera(screenPosition);
}
