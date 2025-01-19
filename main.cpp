#include "source/globals.hpp"
#include "source/core/game_engine.hpp"

int main() {
	GameEngine game;
	game.init(SCREEN_WIDTH, SCREEN_HEIGHT, FRAME_RATE);
	game.run();

	return 0;
}