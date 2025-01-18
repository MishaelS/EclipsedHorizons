#include "input_handler.hpp"

void InputHandler::handleInput(Entity& entity) {
	entity.setDirection({0, 0});

		 if (IsKeyDown(KEY_A)) { entity.setDirection({-1,  0}) }
	else if (IsKeyDown(KEY_D)) { entity.setDirection({ 1,  0}) }
	
		 if (IsKeyDown(KEY_W)) { entity.setDirection({ 0, -1}) }
	else if (IsKeyDown(KEY_S)) { entity.setDirection({ 0,  1}) }
}