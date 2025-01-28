#include "scene.hpp"

Scene::Scene()
:	audioManager(AudioManager::getInstance()),
	textureManager(TextureManager::getInstance()) {}

Scene::~Scene() {
	this->shutDown();
}

void Scene::init() {
	this->audioManager = AudioManager::getInstance();
	this->textureManager = TextureManager::getInstance();
	this->playerTexture = this->textureManager.loadTexture("C:/Dev/projectsCpp/EclipsedHorizons/source/assets/sprites/Character/Idle.png");

	this->audioManager.loadSound("EnemyDie",	"C:/Dev/projectsCpp/EclipsedHorizons/source/assets/sounds/EnemyDie.wav");
	this->audioManager.loadSound("Swipe",		"C:/Dev/projectsCpp/EclipsedHorizons/source/assets/sounds/Swipe.wav");
	this->audioManager.loadSound("Evade",		"C:/Dev/projectsCpp/EclipsedHorizons/source/assets/sounds/Evade.wav");
	this->audioManager.loadSound("Hurt",		"C:/Dev/projectsCpp/EclipsedHorizons/source/assets/sounds/Hurt.wav");
	this->audioManager.loadSound("Hit",			"C:/Dev/projectsCpp/EclipsedHorizons/source/assets/sounds/Hit.wav");
	// this->audioManager.playSound("Evade");

	this->gameCamera = new CameraController({(float)SCREEN_WIDTH, (float)SCREEN_HEIGHT}, 2.f, SMOOTH_SPEED);
	this->gameCamera->setDeadZone(DEAD_ZONE_WIDTH, DEAD_ZONE_HEIGHT);

	this->player = new Player(
		playerTexture,
		{0.f, 0.f},
		{0.f, 0.f, 32.f, 32.f},
		{0.f, 8.f, 12.f, 8.f},
		86.f,
		PUSH_FORCE
	);

	this->addEntity(this->player);
	this->addEntity(
		new Player( playerTexture,
					{0.f, 0.f},
					{0.f, 0.f, 32.f, 32.f},
					{0.f, 8.f, 12.f, 8.f} )
	);
}

void Scene::shutDown() {
	this->audioManager.unloadAllSounds();
	this->textureManager.unloadAllTextures();

	for (auto entity : this->entities) {
		delete entity;
	}
	this->entities.clear();

	delete this->gameCamera;
}

void Scene::addEntity(Entity* entity) {
	this->entities.push_back(entity);
}

void Scene::removeEntity(Entity* entity) {
	auto it = std::find(this->entities.begin(), this->entities.end(), entity);
	if (it != entities.end()) {
		this->entities.erase(it);
		delete entity;
	}
}

void Scene::handleInput() {
	this->player->handleInput();
}

void Scene::update(float deltaTime) {
	for (auto entity : this->entities) {
			entity->update(deltaTime);
		}
	
	this->entityLayerManager.sortEntitiesByHeight(this->entities);
	this->entityLayerManager.updateEntityLayers(this->entities);
	this->gameCamera->update(this->player->getPosition());
	this->collisionManager.checkAndResolveCollisions(this->entities);
}

void Scene::render() {
	this->uiManager.renderHealthBar(this->player->getHealth(), this->player->getMaxHealth(), {10, 10});

	BeginMode2D(this->gameCamera->getCamera());
		this->drawGrid(16, SCREEN_WIDTH, SCREEN_HEIGHT, {255, 255, 255, 64});
		DrawText("Congrats! You created your first window!", 0, 0, 20, LIGHTGRAY);

		for (auto entity : this->entities) {
			entity->render();
		}
	EndMode2D();
}

void Scene::drawGrid(int cellSize, int width, int height, Color color) {
	for (int x =  -width; x < width;  x += cellSize) { DrawLine(      x, -width,     x, height, color); }
	for (int y = -height; y < height; y += cellSize) { DrawLine(-height,      y, width,      y, color); }
}