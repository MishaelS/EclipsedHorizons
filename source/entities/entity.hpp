#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "../graphics/animation_manager.hpp"

class Entity {
public:
	Entity(
		Texture2D texture,
		Vector2 position,
		Rectangle frame,
		Rectangle box,
		float speed, float force=1.f
	);
	virtual ~Entity();

	Vector2 getPosition() const;
	Vector2 getVelocity() const;
	Vector2 getDirection() const;
	float getInteractionRadius() const;
	Rectangle getBoundingBox(Vector2 position) const;
	Vector2 calculateInterpolatedPosition(Vector2 position) const;

	void setPosition(Vector2 position);
	void setVelocity(Vector2 velocity);
	void setDirection(Vector2 direction);

	bool checkCollision(const Entity& other) const;
	void resolveCollision(Entity& other);

	virtual void handleInput();
	virtual void movement(float deltaTime);
	virtual void update(float deltaTime);
	virtual void render() const;

protected:
	Vector2 position;
	Vector2 velocity;
	Vector2 direction;

	float pushForce;
	float movementSpeed;
	float animationSpeed;
	float interactionRadius;

	Texture2D texture;
	Rectangle frameRect;
	Rectangle collisionBox;

	std::vector<Rectangle> idleFrames;
	AnimationManager idleAnimation;
};