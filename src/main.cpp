#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/core/game_engine.hpp"

int main() {
    
	GameEngine game(ScreenWidth, ScreenHeight, FrameRate);
	if (game.initialize()) {
		game.run();
	}

    return 0;
}