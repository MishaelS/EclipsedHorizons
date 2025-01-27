#include "Entity.hpp"

Entity::Entity(Texture2D texture, Vector2 position, Rectangle frame, Rectangle box, float speed, float force)
:	texture(texture),
	position(position),
	interactionRadius(( (box.width + box.height) / 2.f )),
	frameRect(frame),
	collisionBox(box),
	movementSpeed(speed),
	pushForce(force),
	idleAnimation({
		{0 * 32, 0, 32, 32},
		{1 * 32, 0, 32, 32},
		{2 * 32, 0, 32, 32},
		{3 * 32, 0, 32, 32}
	}, 0.1f) {
}

Entity::~Entity() {
	UnloadTexture(this->texture);
}

Vector2 Entity::getPosition() const { return this->position; }
Vector2 Entity::getVelocity() const { return this->velocity; }
Vector2 Entity::getDirection() const { return this->direction; }
float Entity::getInteractionRadius() const { return this->interactionRadius; }
Rectangle Entity::getBoundingBox(Vector2 position) const {
	return {
		position.x - (this->collisionBox.width  / 2.f) + this->collisionBox.x,
		position.y - (this->collisionBox.height / 2.f) + this->collisionBox.y,
		this->collisionBox.width,
		this->collisionBox.height
	};
}

Vector2 Entity::calculateInterpolatedPosition(Vector2 position) const {
	return {
		position.x + this->velocity.x,
		position.y + this->velocity.y
	};
}

void Entity::setPosition(Vector2 position) { this->position = position; }
void Entity::setVelocity(Vector2 velocity) { this->velocity = velocity; }
void Entity::setDirection(Vector2 direction) { this->direction = direction; }

bool Entity::checkCollision(const Entity& other) const {
	return CheckCollisionRecs(
		this->getBoundingBox(this->calculateInterpolatedPosition(this->position)),
		other.getBoundingBox(other.calculateInterpolatedPosition(other.position))
	);
}

void Entity::resolveCollision(Entity& other) {
	Vector2 direction = Vector2Subtract(this->position, other.position);
	float distance = Vector2Length(direction);

	if (distance == 0.f) return;

	direction = Vector2Normalize(direction);
	this->position = Vector2Add(this->position, Vector2Scale(direction, this->pushForce));
	other.position = Vector2Subtract(other.position, Vector2Scale(direction, this->pushForce));
}

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
	this->idleAnimation.update(deltaTime);
	this->movement(deltaTime);
}

void Entity::render() const {
	DrawRectangleLinesEx(
		this->getBoundingBox(this->calculateInterpolatedPosition(this->position)),
		2.f,
		{128, 128, 255,  64}
	);

	DrawTexturePro(
		this->texture,
		{this->idleAnimation.getCurrentFrame().x,
		 this->idleAnimation.getCurrentFrame().y,
		 this->idleAnimation.getCurrentFrame().width,
		 this->idleAnimation.getCurrentFrame().height},
		{this->calculateInterpolatedPosition(this->position).x - (this->idleAnimation.getCurrentFrame().width  / 2.f),
		 this->calculateInterpolatedPosition(this->position).y - (this->idleAnimation.getCurrentFrame().height / 2.f),
		 this->idleAnimation.getCurrentFrame().width,
		 this->idleAnimation.getCurrentFrame().height},
		{0.f, 0.f},
		0.f,
		WHITE
	);
}