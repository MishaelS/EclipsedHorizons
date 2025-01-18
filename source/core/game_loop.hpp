#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "input_handler.hpp"
#include "renderer.hpp"

#include "../entities/world.hpp"
#include "../entities/player.hpp"

#include "../ui/ui_manager.hpp"

class GameLoop {
public:
	GameLoop();

	void init();
	void run();

private:
	void update(float deltaTime);
	void render();

	World world;
	Player player;
	UIManager uiManager;
	bool isRunning;
};