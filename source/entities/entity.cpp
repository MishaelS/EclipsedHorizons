#include "Entity.hpp"

Entity::Entity(const std::string& texturePath, Vector2 position) : position(position) {}

Vector2 getPosition() const { return this->position }
Vector2 getVelocity() const { return this->velocity }
Vector2 getDirection() const { return this->direction }

void setPosition(Vector2 position) { this->position = position }
void setVelocity(Vector2 velocity) { this->velocity = velocity }
void setDirection(Vector2 direction) { this->direction = direction }

void render() const {
	
}