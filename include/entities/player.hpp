#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/entities/entity.hpp"

class Player : public Entity {
public:
	Player( Vector2 position,
			Texture2D spriteSheet,
			Vector2 frameSize,
			float movementSpeed=68.f,
			float animationSpeed=0.20f );
	virtual ~Player();

	void management();
	void update(float deltaTime) override;
	void render() override;

private:
	void updateState() override;
	void updateAnimation(float deltaTime) override;
	void updateMovement(float deltaTime) override;

};