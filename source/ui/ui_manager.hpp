#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class UIManager {
public:
	UIManager();
	~UIManager();
	
	void renderHealthBar(float health, float maxHealth, Vector2 position);
	void renderScore(int score, Vector2 position);
};