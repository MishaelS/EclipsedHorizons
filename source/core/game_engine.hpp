#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "../graphics/time_manager.hpp"
#include "game_state_manager.hpp"
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

	GameStateManager& stateManager;
	Scene* gameScene;
};