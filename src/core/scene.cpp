#include "../include/core/scene.hpp"

Scene::Scene()
:	maxEntities(256) {
	
	this->level = new Level(WorldWidth, WorldHeight, TileSize);
	this->level->generate();

	this->player = new Player(
		{(WorldWidth  * TileSize) / 2.f,
		 (WorldHeight * TileSize) / 2.f},
		LoadTexture("assets/Characters/Basic_Charakter_Spritesheet.png"),
		{32.f, 32.f},
		86.f,
		0.20f
	);

	this->cameraController = new CameraController(
		this->player->getPosition(),
		{ScreenWidth  / 2.f,
		 ScreenHeight / 2.f},
		64.f,
		16.f
	);
	this->cameraController->setZoom(2.f);

	this->addEntity(this->player);
}

Scene::~Scene() {
	delete this->level;
	delete this->player;
	delete this->cameraController;

	for (Entity* entity : this->entities) {
		this->removeEntity(entity);
	}
}

unsigned int Scene::quantityEntities() const {
	unsigned int quantity = 0;
	for (Entity* entity : this->entities) {
		if (dynamic_cast<Entity*>(entity) != nullptr) {
			quantity++;
		}
	}

	return quantity;
}

void Scene::addEntity(Entity* entity) {
	this->entities.push_back(entity);
}

void Scene::removeEntity(Entity* entity) {
	auto it = std::find(this->entities.begin(), this->entities.end(), entity);
	if (it != this->entities.end()) {
		this->entities.erase(it);
		delete entity; // Освобождаем память
	}
}

bool Scene::isEntityVisible(Entity* entity, const Camera2D& camera) const {
	// Получаем позицию и радиус объекта
	Vector2 position = entity->getPosition();
	float radius = entity->getRaduis();

	// Вычисляем видимую область камеры
	Rectangle visibleArea = {
		camera.target.x - ScreenWidth  / 2 / camera.zoom,
		camera.target.y - ScreenHeight / 2 / camera.zoom,
		ScreenWidth  / camera.zoom,
        ScreenHeight / camera.zoom
	};

	// Проверяем, находится ли объект в видимой области
	return CheckCollisionCircleRec(position, radius, visibleArea);
}

void Scene::spawnEntity(const std::string& entityType) {
	if (this->quantityEntities() >= this->maxEntities) {
		return; // Превышен лимит сущностей
	}

	Entity* newEntity = nullptr;

	if (entityType == "Cow") {
		newEntity = new Entity(
			this->player->getPosition(),
			LoadTexture("assets/Characters/Free_Cow_Sprites.png"),
			{32.f, 32.f},
			68.f,
			0.24f
		);
	} else if (entityType == "Chicken") {
		newEntity = new Entity(
			this->player->getPosition(),
			LoadTexture("assets/Characters/Free_Chicken_Sprites.png"),
			{16.f, 16.f},
			68.f,
			0.24f
		);
	}

	if (newEntity) {
		this->addEntity(newEntity);
	}
}

void Scene::sortEntities() {
	// Сортируем сущности по координате Y, а если Y равны, то по X
	std::sort(this->entities.begin(), this->entities.end(), [](Entity* entityA, Entity* entityB) {
		if (entityA->getPosition().y == entityB->getPosition().y) {
			return entityA < entityB; // Сортируем по X, если Y равны
		}

		return entityA->getPosition().y < entityB->getPosition().y; // Иначе сортируем по Y
	});
}

void Scene::collisionEntity(Entity* entity) {
	this->player->isCollisionWithEntity(entity);
}

void Scene::UpdateCollisions(float deltaTime) {
	if (!this->player) return; // Проверка на nullptr

	// Проверяем столкновения между игроком и другими сущностями
	for (Entity* entity : this->entities) {
		if (entity && entity != this->player && this->isEntityVisible(entity, this->cameraController->getCamera())) {
			this->player->isCollisionWithEntity(entity); // Проверяем столкновение
		}
	}

	// Проверяем столкновения между всеми сущностями
	for (size_t i = 0; i < entities.size(); ++i) {
		if (!entities[i] || !this->isEntityVisible(entities[i], this->cameraController->getCamera())) continue;

		for (size_t j = i + 1; j < entities.size(); ++j) {
			if (!entities[j] || !this->isEntityVisible(entities[j], this->cameraController->getCamera())) continue;
			entities[i]->isCollisionWithEntity(entities[j]); // Проверяем столкновение
		}
	}
}

void Scene::processInput() {
	this->player->management();

	if (IsKeyPressed(KEY_P)) {
		this->spawnEntity("Cow");
	} else if (IsKeyPressed(KEY_O)) {
		this->spawnEntity("Chicken");
	}
}

void Scene::update(float deltaTime) {
	// Обновляем камеру, чтобы она следовала за игроком
	this->cameraController->setPosition(this->player->getPosition());
	this->cameraController->update();

	// Обновляем все сущности
	for (Entity* entity : this->entities) {
		if (this->isEntityVisible(entity, this->cameraController->getCamera())) {
			entity->update(deltaTime);
		}
	}

	// Проверяем столкновения
	this->UpdateCollisions(deltaTime);
}

void Scene::render() {
	// Сортируем сущности перед отрисовкой
	this->sortEntities();

	BeginMode2D(this->cameraController->getCamera());
		// Отрисовываем мир
		this->level->render();

		// --- Сетка карты --- //
		for (int x = 0; x < WorldWidth * TileSize; x += TileSize) {
			DrawLine(x, 0, x, WorldWidth * TileSize, {255, 255, 255, 64});
		}
		for (int y = 0; y < WorldHeight * TileSize; y += TileSize) {
			DrawLine(0, y, WorldHeight * TileSize, y, {255, 255, 255, 64});
		}

		// Отрисовываем все сущности
		for (Entity* entity : this->entities) {
			if (this->isEntityVisible(entity, this->cameraController->getCamera())) {
				entity->render();
			}
		}

		// Центер камеры
		DrawCircleV(cameraController->getCamera().target, 2.f, RED);
	EndMode2D();
}
