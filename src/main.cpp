#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/core/game_engine.hpp"

int main() {

	GameEngine game(ScreenWidth, ScreenHeight, FrameRate);
	if (game.init()) {
		game.run();
	}

	return 0;
}