#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class AnimationManager {
public:
	AnimationManager(const std::vector<Rectangle>& frames, float frameDuration);
	~AnimationManager();

	void update(float deltaTime);
	Rectangle getCurrentFrame() const;
	void reset();

private:
	std::vector<Rectangle> frames;
	float frameDuration;
	float currentTime;
	int currentFrame;
};