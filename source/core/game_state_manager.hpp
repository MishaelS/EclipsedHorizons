#pragma once

enum class GameState {
	MENU,
	PLAYING,
	PAUSED,
	GAME_OVER
};

class GameStateManager {
public:
	static GameStateManager& getInstance();

	void setState(GameState state);
	GameState getState() const;

private:
	GameStateManager();
	~GameStateManager();
	
	GameState currentState;
};