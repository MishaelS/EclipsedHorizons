#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

class VisibilityManager {
public:
	VisibilityManager(const Camera2D& camera);
	~VisibilityManager();

	bool isVisible(const Vector2& position, float radius) const; // Проверяет, видна ли точка на экране
	void updateCamera(const Camera2D& camera); // Обновляет состояние камеры

private:
	Camera2D camera; // Текущая камера
	Rectangle visibleArea; // Видимая область экрана

	void updateVisibleArea(); // Обновляет видимую область на основе текущей камеры
};