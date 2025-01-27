#include "game_state_manager.hpp"

GameStateManager::GameStateManager() : currentState(GameState::MENU) {}
GameStateManager::~GameStateManager() {}

GameStateManager& GameStateManager::getInstance() {
	static GameStateManager instance;
	return instance;
}

void GameStateManager::setState(GameState state) {
	currentState = state;
}

GameState GameStateManager::getState() const {
	return currentState;
}