#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class SpriteSheet {
public:
	SpriteSheet(const std::string& texturePath, Vector2 position, Vector2 frameSize);
	virtual ~SpriteSheet();

	Texture2D getTexture() const;
	Vector2 getFrameSize() const;
	float getFrameDuration() const;
	float getAnimationTimer() const;
	int getCurrentFrame() const;
	bool getIsPlaying() const;
	bool getLoop() const;

	void setTexture(const std::string& texturePath);
	void setFrameSize(Vector2 frameSize);
	void setFrameDuration(float duration);
	void setAnimationTimer(float timer);
	void setCurrentFrame(int frame);
	void setIsPlaying(bool isPlaying);
	void setLoop(bool loop);

	void play();
	void stop();
	void reset();

	void update(float deltaTime);
	void render();

private:
	Vector2 position;

	Texture2D texture;
	Vector2 frameSize;

	float frameDuration;
	float animationTimer;
	int currentFrame;
	bool isPlaying;
	bool loop;
};