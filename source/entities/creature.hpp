#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "Entity.hpp"

class Creature : public Entity {
public:
	Creature(const std::string& texturePath, Vector2 position);
	virtual ~Creature();

	float getHealth() const;
	float getMaxHealth() const;
	float getMovementSpeed() const;

	void setHealth(float health);
	void setMaxHealth(float maxHealth);
	void setMovementSpeed(float speed);

	void takeDamage(float damage);
	void heal(float amount);
	void move(float deltaTime);

private:
	float health;
	float maxHealth;
	float movementSpeed;
}