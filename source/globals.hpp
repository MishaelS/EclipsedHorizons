#pragma once

extern const unsigned int SCREEN_WIDTH;
extern const unsigned int SCREEN_HEIGHT;
extern const unsigned int FRAME_RATE;

extern const float FIXED_TIME_STEP;

extern const unsigned int DEAD_ZONE_WIDTH;
extern const unsigned int DEAD_ZONE_HEIGHT;
extern const float SMOOTH_SPEED;
extern const float PUSH_FORCE;

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