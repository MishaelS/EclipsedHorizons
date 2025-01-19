#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "../utils/animation_state.hpp"

class Entity {
public:
	Entity();
	virtual ~Entity();

	Vector2 getPosition() const;
	Vector2 getVelocity() const;
	Vector2 getDirection() const;

	unsigned int getCurrentFrameIndex() const;

	void setPosition(Vector2 position);
	void setVelocity(Vector2 velocity);
	void setDirection(Vector2 direction);

	void setAnimationState(ActionState action, DirectionState direction);
	void setFrameDuration(float duration);

	void movement(float deltaTime);

	virtual void update(float deltaTime);
	virtual void render() const;

protected:
	Vector2 position;
	Vector2 velocity;
	Vector2 direction;

	float movementSpeed;
	float animationSpeed;

	float health;
	float maxHealth;

	Texture2D texture;
	Vector2 frameSize;
	float frameDuration;
	float animationTimer;
	unsigned int currentFrame;

	DirectionState directionState;
	ActionState actionState;

	void updateAnimation(float deltaTime);
};