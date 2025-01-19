#pragma once

enum class DirectionState {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	IDLE
};

enum class ActionState {
	IDLE,
	RUN,
	ATTACK,
	JUMP,
	DEAD
};

extern const unsigned int FRAME_WIDTH;
extern const unsigned int FRAME_HEIGHT;
extern const unsigned int SPRITE_SHEET_COLUMNS;
extern const unsigned int SPRITE_SHEET_ROWS;