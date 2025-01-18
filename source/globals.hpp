#pragma once

extern const unsigned int ScreenWidth;
extern const unsigned int ScreenHeight;
extern const unsigned int FrameRate;

extern const unsigned float FixedTimeStep;

enum DirectionState {
	DOWN,
	RIGHT,
	LEFT,
	UP
};

enum ActionState {
	IDLE,
	RUNNING,
	ATTACKING,
	DEAD
};