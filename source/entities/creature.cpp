#include "creature.hpp"

Creature::Creature(const std::string& texturePath, Vector2 position)
: Entity(texturePath, position), health(0.f), maxHealth(0.f), movementSpeed(0.f) {}

float getHealth() const { return this->health; }
float getMaxHealth() const { return this->maxHealth; }
float getMovementSpeed() const { return this->movementSpeed; }

void setHealth(float health) { this->health = health; }
void setMaxHealth(float maxHealth) { this->maxHealth = maxHealth; }
void setMovementSpeed(float speed) { this->movementSpeed = speed; }

void takeDamage(float damage) {
	this->health -= damage;
	if (this->health < 0) {
		this->health = 0;
	}
}

void heal(float amount) {
	this->health += amount;
	if (this->health > this->maxHealth) {
		this->health = this->maxHealth;
	}
}

void move(float deltaTime) {
	this->setPosition(
		this->getDirection().x * this->movementSpeed * deltaTime,
		this->getDirection().y * this->movementSpeed * deltaTime
	);
}
