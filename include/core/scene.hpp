#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/core/camera_controller.hpp"
#include "../include/graphics/level.hpp"
#include "../include/entities/entity.hpp"
#include "../include/entities/player.hpp"

class Scene {
public:
	Scene();
	~Scene();

	void processInput();			// Обработка ввода
	void update(float deltaTime);	// Обновление сцены
	void render();					// Отрисовка сцены

private:
	unsigned int quantityEntities() const; // Ограничение количество добавляемых существ
	
	void sortEntities();				// Метод для сортировки сущностей
	void addEntity(Entity* entity);		// Добавление сущности
	void removeEntity(Entity* entity);	// Удаление сущности
	bool isEntityVisible(Entity* entity, const Camera2D& camera) const; // Проверка видимости сущности

	void spawnEntity(const std::string& entityType); // спавна сущности

	unsigned int maxEntities; // Максимальное количество

	Level* level;						// Уровень (мир)
	Player* player;						// Игрок
	CameraController* cameraController;	// Камера
	std::vector<Entity*> entities;		// Все сущности

};