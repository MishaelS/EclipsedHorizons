#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "time_manager.hpp"

class GameEngine {
public:
	GameEngine();
	virtual ~GameEngine();

	void init(unsigned int width, unsigned int height, unsigned int fps);
	void run();

private:
	void handleInput();
	void update(float deltaTime);
	void render();

	bool isRunning;
};