#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class Entity {
public:
	Entity(Texture2D texture, Vector2 position, Rectangle frame, float speed);
	virtual ~Entity();

	Vector2 getPosition() const;
	Vector2 getVelocity() const;
	Vector2 getDirection() const;

	void setPosition(Vector2 position);
	void setVelocity(Vector2 velocity);
	void setDirection(Vector2 direction);

	virtual void handleInput();
	virtual void movement(float deltaTime);
	virtual void update(float deltaTime);
	virtual void render() const;

protected:
	Vector2 position;
	Vector2 velocity;
	Vector2 direction;

	float movementSpeed;
	float animationSpeed;

	Texture2D texture;
	Rectangle frameRect;
};