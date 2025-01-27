#include "globals.hpp"

const unsigned int SCREEN_WIDTH  = 1024;
const unsigned int SCREEN_HEIGHT = 600;
const unsigned int FRAME_RATE = 60;

const float FIXED_TIME_STEP = 1.f / FRAME_RATE;

const unsigned int DEAD_ZONE_WIDTH = 128;
const unsigned int DEAD_ZONE_HEIGHT = 128;
const float SMOOTH_SPEED = 0.1f;
const float PUSH_FORCE = 1.f;