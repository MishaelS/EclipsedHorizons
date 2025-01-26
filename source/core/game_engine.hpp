#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "time_manager.hpp"
#include "scene.hpp"

class GameEngine {
public:
	GameEngine();
	virtual ~GameEngine();

	void init();
	void run();

private:
	void shutDown();
	void handleInput();
	void update(float deltaTime);
	void render();

	bool isRunning;

	Scene* gameScene;
};