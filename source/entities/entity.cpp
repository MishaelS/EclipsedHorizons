#include "Entity.hpp"

Entity::Entity(Texture2D texture, Vector2 position, Rectangle frame, float speed)
:	texture(texture), position(position), frameRect(frame), movementSpeed(speed) {}

Entity::~Entity() {
	UnloadTexture(this->texture);
}

Vector2 Entity::getPosition() const { return this->position; }
Vector2 Entity::getVelocity() const { return this->velocity; }
Vector2 Entity::getDirection() const { return this->direction; }

void Entity::setPosition(Vector2 position) { this->position = position; }
void Entity::setVelocity(Vector2 velocity) { this->velocity = velocity; }
void Entity::setDirection(Vector2 direction) { this->direction = direction; }

void Entity::handleInput() {
	this->setDirection({0.f, 0.f});
}

void Entity::movement(float deltaTime) {
	this->velocity.x = this->direction.x * this->movementSpeed * deltaTime;
	this->velocity.y = this->direction.y * this->movementSpeed * deltaTime;

	this->position.x += this->velocity.x;
	this->position.y += this->velocity.y;
}

void Entity::update(float deltaTime) {
	this->movement(deltaTime);
}

void Entity::render() const {
	DrawRectangleV(
		{this->getPosition().x - (this->frameRect.width  / 2.f),
		 this->getPosition().y - (this->frameRect.height / 2.f)},
		{this->frameRect.width, this->frameRect.height},
		{128, 128, 255,  64}
	);

	DrawTexturePro(
		this->texture,
		{this->frameRect.x,
		 this->frameRect.y,
		 this->frameRect.width,
		 this->frameRect.height},
		{this->position.x - (this->frameRect.width  / 2.f),
		 this->position.y - (this->frameRect.height / 2.f),
		 this->frameRect.width,
		 this->frameRect.height},
		{0.f, 0.f},
		0.f,
		WHITE
	);
}