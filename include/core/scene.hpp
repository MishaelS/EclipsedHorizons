#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/graphics/visibility_manager.hpp"
#include "../include/core/camera_controller.hpp"
#include "../include/graphics/level.hpp"
#include "../include/entities/entity.hpp"
#include "../include/entities/player.hpp"

class Scene {
public:
	Scene();
	~Scene();

	void init();				  // Инициализирует сцену и настройки
	void handleInput();			  // Обрабатывает ввод пользователя
	void update(float deltaTime); // Обновляет состояние сцены
	void render();				  // Отрисовывает сцену

private:
	unsigned int getEntityCount() const; // Возвращает количество сущностей на сцене
	void sortEntities();				 // Сортирует сущности для корректной отрисовки
	void addEntity(Entity* entity);		 // Добавляет сущность на сцену
	void removeEntity(Entity* entity);	 // Удаляет сущность со сцены

	void spawnEntity(const std::string& entityType); // Создает сущность на сцене
	void handleCollisions(float deltaTime); // Обрабатывает столкновения между сущностями

	unsigned int maxEntities; // Максимальное количество сущностей на сцене

	Level* level;						  // Уровень (мир)
	Player* player;						  // Игрок
	CameraController* cameraController;	  // Контроллер камеры
	VisibilityManager* visibilityManager; // Менеджер видимости
	std::vector<Entity*> entities;		  // Список сущностей на сцене
};