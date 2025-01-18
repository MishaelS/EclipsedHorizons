#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class Entity {
public:
	Entity(const std::string& texturePath, Vector2 position);
	virtual ~Entity();

	Vector2 getPosition() const;
	Vector2 getVelocity() const;
	Vector2 getDirection() const;

	void setPosition(Vector2 position);
	void setVelocity(Vector2 velocity);
	void setDirection(Vector2 direction);

	virtual void update(float deltaTime);
	virtual void render() const;

private:
	Vector2 position;
	Vector2 velocity;
	Vector2 direction;
};