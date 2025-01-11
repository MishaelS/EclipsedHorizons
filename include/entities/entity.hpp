#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

class Entity {
public:
	Entity( Vector2 position,
			Texture2D spriteSheet,
			Vector2 frameSize,
			float movementSpeed=68.f,
			float animationSpeed=0.20f );
	virtual ~Entity();

	virtual float getRaduis() const;
	virtual float getRadiusHitbox(float ratio=1.f) const;

	virtual Vector2 getPosition() const;
	virtual Vector2 getVelocity() const;
	virtual Vector2 getDirection() const;
	
	virtual void setPosition(Vector2 position);
	virtual void setVelocity(Vector2 velocity);
	virtual void setDirection(Vector2 direction);

	virtual void isCollisionWithEntity(Entity* entity);

	virtual void update(float deltaTime);
	virtual void render();

protected:
	// Методы для управления состоянием
	virtual void updateState();
	virtual void updateAnimation(float deltaTime);
	virtual void updateMovement(float deltaTime);

	// Поля для управления ( состоянием сущьности и его анимацией )
	Vector2 position;
	Vector2 velocity;
	Vector2 direction;

	float movementSpeed;
	float animationSpeed;
	float animationTimer;

	Texture2D spriteSheet;
	Rectangle frameRect;
	Vector2 frameSize;

	bool isAttacking;
	AnimationData currentAnimation;

	Color tintHitbox;
	Color tintEntity;

};