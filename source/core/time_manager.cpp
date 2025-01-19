#include "time_manager.hpp"

TimeManager::TimeManager(float fps) {
	this->fixedTimeStep = fps;
	this->reset();
}

TimeManager::~TimeManager() {}

float TimeManager::getDeltaTime() const { return this->deltaTime; }
bool TimeManager::shouldUpdate() const { return this->accumulatedTime >= this->fixedTimeStep; }

void TimeManager::pause() {
	this->accumulatedTime = 0.f;
	this->deltaTime = 0.f;
}

void TimeManager::reset() {
	this->accumulatedTime = 0.f;
	this->lastTime = GetTime();
	this->deltaTime = 0.f;
}

void TimeManager::update() {
	float currentTime = GetTime();
	this->deltaTime = currentTime - this->lastTime;
	this->lastTime = currentTime;

	this->accumulatedTime += this->deltaTime;
}