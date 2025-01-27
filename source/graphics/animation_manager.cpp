#include "animation_manager.hpp"

AnimationManager::AnimationManager(const std::vector<Rectangle>& frames, float frameDuration)
	: frames(frames), frameDuration(frameDuration), currentTime(0.f), currentFrame(0) {}

AnimationManager::~AnimationManager() {}

void AnimationManager::update(float deltaTime) {
	currentTime += deltaTime;
	if (currentTime >= frameDuration) {
		currentTime = 0.f;
		currentFrame = (currentFrame + 1) % frames.size();
	}
}

Rectangle AnimationManager::getCurrentFrame() const {
	return frames[currentFrame];
}

void AnimationManager::reset() {
	currentTime = 0.f;
	currentFrame = 0;
}