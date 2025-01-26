#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "Entity.hpp"

class Player : public Entity {
public:
	Player(Texture2D texture, Vector2 position, Rectangle frame, float speed);
	virtual ~Player();

	float getHealth() const;
	float getMaxHealth() const;

	void setHealth(float health);
	void setMaxHealth(float maxHealth);
	
	virtual void handleInput() override;
	virtual void movement(float deltaTime) override;
	virtual void update(float deltaTime) override;
	virtual void render() const override;

private:
	float health;
	float maxHealth;
};