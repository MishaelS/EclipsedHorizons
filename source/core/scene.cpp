#include "scene.hpp"

Scene::Scene() {}

Scene::~Scene() {
	this->shutDown();
}

void Scene::init() {
	this->gameCamera = new CameraController({(float)SCREEN_WIDTH, (float)SCREEN_HEIGHT}, 2.f);
	this->gameCamera->setDeadZone(DEAD_ZONE_WIDTH, DEAD_ZONE_HEIGHT);

	this->player = new Player(
		LoadTexture("C:/Dev/projectsCpp/EclipsedHorizons/source/assets/sprites/Character/Idle.png"),
		{0.f, 0.f},
		{0.f, 0.f, 32.f, 32.f},
		86.f
	);
}

void Scene::shutDown() {
	delete this->player;
	delete this->gameCamera;
}

void Scene::handleInput() {
	this->player->handleInput();
}

void Scene::update(float deltaTime) {
	this->player->update(deltaTime);
	this->gameCamera->update(this->player->getPosition());
}

void Scene::render() {
	BeginMode2D(this->gameCamera->getCamera());

		this->player->render();

	EndMode2D();
}