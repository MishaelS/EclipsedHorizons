#include "ui_manager.hpp"

UIManager::UIManager() {}
UIManager::~UIManager() {}

void UIManager::renderHealthBar(float health, float maxHealth, Vector2 position) {
	float width = 100.f;
	float height = 10.f;
	DrawRectangle(position.x, position.y, width, height, RED);
	DrawRectangle(position.x, position.y, width * (health / maxHealth), height, GREEN);
}

void UIManager::renderScore(int score, Vector2 position) {
	DrawText(TextFormat("Score: %d", score), position.x, position.y, 20, WHITE);
}