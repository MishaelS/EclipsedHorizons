#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "../graphics/camera_controller.hpp"
#include "../entities/player.hpp"

class Scene {
public:
	Scene();
	virtual ~Scene();
	
	void init();

	void handleInput();
	void update(float deltaTime);
	void render();

private:
	void shutDown();
	
	CameraController* gameCamera;
	Player* player;
};