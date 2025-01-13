#include "../include/core/scene.hpp"

Scene::Scene() : maxEntities(256) {}

Scene::~Scene() {
	delete this->level;
	delete this->player;
	delete this->cameraController;
	delete this->visibilityManager;

	for (Entity* entity : this->entities) {
		this->removeEntity(entity);
	}
}

void Scene::init() {
	this->level = new Level(WorldWidth, WorldHeight, TileSize);
	this->level->generate();

	this->player = new Player(
		{(WorldWidth  * TileSize) / 2.f,
		 (WorldHeight * TileSize) / 2.f},
		"assets/Characters/Basic_Charakter_Spritesheet.png",
		{16.f, 16.f},
		this->level,
		86.f,
		0.20f
	);
	this->addEntity(this->player);

	this->cameraController = new CameraController(
		this->player->getPosition(),
		{ScreenWidth  / 2.f,
		 ScreenHeight / 2.f},
		64.f,
		16.f
	);
	this->cameraController->setZoom(2.f);

	this->visibilityManager = new VisibilityManager(cameraController->getCamera());
}

void Scene::handleInput() {
	this->player->handleInput();

	if (IsKeyPressed(KEY_P)) {
		this->spawnEntity("Cow");
	} else if (IsKeyPressed(KEY_O)) {
		this->spawnEntity("Chicken");
	}
}

void Scene::update(float deltaTime) {
	this->cameraController->setPosition(this->player->getPosition());
	this->cameraController->update();
	this->visibilityManager->updateCamera(cameraController->getCamera());

	for (Entity* entity : this->entities) {
		if (this->visibilityManager->isVisible(entity->getPosition(), entity->getRadius())) {
			entity->update(deltaTime);
		}
	}

	this->handleCollisions(deltaTime);
}

void Scene::render() {
	this->sortEntities();

	BeginMode2D(this->cameraController->getCamera());
	this->level->render(*this->visibilityManager);

	for (Entity* entity : this->entities) {
		if (this->visibilityManager->isVisible(entity->getPosition(), entity->getRadius())) {
			entity->render();
		}
	}

	DrawCircleV(cameraController->getCamera().target, 1.5f, RED);
	EndMode2D();
}

void Scene::addEntity(Entity* entity) {
	this->entities.push_back(entity);
}

void Scene::removeEntity(Entity* entity) {
	auto it = std::find(this->entities.begin(), this->entities.end(), entity);
	if (it != this->entities.end()) {
		this->entities.erase(it);
		delete entity;
	}
}

void Scene::handleCollisions(float deltaTime) {
	if (!this->player) return;

	for (Entity* entity : this->entities) {
		if (entity && entity != this->player && this->visibilityManager->isVisible(entity->getPosition(), entity->getRadius())) {
			this->player->handleCollision(entity);
		}
	}

	for (size_t i = 0; i < entities.size(); ++i) {
		if (!entities[i] || !this->visibilityManager->isVisible(entities[i]->getPosition(), entities[i]->getRadius())) continue;

		for (size_t j = i + 1; j < entities.size(); ++j) {
			 if (!entities[j] || !this->visibilityManager->isVisible(entities[j]->getPosition(), entities[j]->getRadius())) continue;
			entities[i]->handleCollision(entities[j]);
		}
	}
}

void Scene::sortEntities() {
	std::sort(this->entities.begin(), this->entities.end(), [](Entity* entityA, Entity* entityB) {
		if (entityA->getPosition().y == entityB->getPosition().y) {
			return entityA < entityB;
		}

		return entityA->getPosition().y < entityB->getPosition().y;
	});
}

unsigned int Scene::getEntityCount() const {
	unsigned int quantity = 0;
	for (Entity* entity : this->entities) {
		if (dynamic_cast<Entity*>(entity) != nullptr) {
			quantity++;
		}
	}

	return quantity;
}

void Scene::spawnEntity(const std::string& entityType) {
	if (this->getEntityCount() >= this->maxEntities) {
		return; // Превышен лимит сущностей
	}

	Entity* newEntity = nullptr;

	if (entityType == "Cow") {
		newEntity = new Entity(
			this->player->getPosition(),
			"assets/Characters/Free_Cow_Sprites.png",
			{32.f, 32.f},
			this->level,
			68.f,
			0.24f
		);
	} else if (entityType == "Chicken") {
		newEntity = new Entity(
			this->player->getPosition(),
			"assets/Characters/Free_Chicken_Sprites.png",
			{16.f, 16.f},
			this->level,
			68.f,
			0.24f
		);
	}

	if (newEntity) {
		this->addEntity(newEntity);
	}
}