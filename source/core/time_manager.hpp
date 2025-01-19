#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class TimeManager {
public:
	TimeManager(float fps);
	virtual ~TimeManager();

	float getDeltaTime() const;
	bool shouldUpdate() const;

	void pause();
	void reset();
	void update();

private:
	float fixedTimeStep;
	float accumulatedTime;
	float lastTime;
	float deltaTime;
};