#include "../include/graphics/visibility_manager.hpp"

VisibilityManager::VisibilityManager(const Camera2D& camera) : camera(camera) {
	updateVisibleArea();
}

VisibilityManager::~VisibilityManager() {}

bool VisibilityManager::isVisible(const Vector2& position, float radius) const {
	return CheckCollisionCircleRec(position, radius, visibleArea);
}

void VisibilityManager::updateCamera(const Camera2D& camera) {
	this->camera = camera;
	updateVisibleArea();
}

void VisibilityManager::updateVisibleArea() {
	visibleArea = {
		camera.target.x - ScreenWidth  / 2 / camera.zoom,
		camera.target.y - ScreenHeight / 2 / camera.zoom,
		ScreenWidth  / camera.zoom,
		ScreenHeight / camera.zoom
	};
}