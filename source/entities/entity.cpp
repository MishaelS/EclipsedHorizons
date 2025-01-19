#include "Entity.hpp"

Entity::Entity() 
:	position({0, 0}), velocity({0, 0}), direction({0, 0}),
	movementSpeed(0.f), animationSpeed(0.f), health(0.f), maxHealth(0.f),
	frameSize({static_cast<float>(FRAME_WIDTH), static_cast<float>(FRAME_HEIGHT)}),
	frameDuration(0.1f), animationTimer(0.f),
	currentFrame(0), directionState(DirectionState::DOWN), actionState(ActionState::IDLE) {}

Entity::~Entity() {}

Vector2 Entity::getPosition() const { return position; }
Vector2 Entity::getVelocity() const { return velocity; }
Vector2 Entity::getDirection() const { return direction; }

void Entity::setPosition(Vector2 position) { this->position = position; }
void Entity::setVelocity(Vector2 velocity) { this->velocity = velocity; }
void Entity::setDirection(Vector2 direction) { this->direction = direction; }

void Entity::setAnimationState(ActionState action, DirectionState direction) {
	this->actionState = action;
	this->directionState = direction;
	this->currentFrame = 0;
}

void Entity::setFrameDuration(float duration) {
	this->frameDuration = duration;
}

unsigned int Entity::getCurrentFrameIndex() const {
	unsigned int row = static_cast<unsigned int>(this->actionState);
	unsigned int column = static_cast<unsigned int>(this->directionState);

	return row * SPRITE_SHEET_COLUMNS + column;
}

void Entity::updateAnimation(float deltaTime) {
	this->animationTimer += deltaTime;

	if (this->animationTimer >= this->frameDuration) {
		this->animationTimer = 0.f;

		this->currentFrame = (this->currentFrame + 1) % SPRITE_SHEET_COLUMNS;
	}
}

void Entity::movement(float deltaTime) {
	this->velocity.x = this->direction.x * this->movementSpeed * deltaTime;
	this->velocity.y = this->direction.y * this->movementSpeed * deltaTime;

	this->position.x += this->velocity.x;
	this->position.y += this->velocity.y;
}

void Entity::update(float deltaTime) {
	this->updateAnimation(deltaTime);
	this->movement(deltaTime);
}

void Entity::render() const {
	unsigned int frameIndex = this->getCurrentFrameIndex();
	Rectangle sourceRect = {
		static_cast<float>(frameIndex * FRAME_WIDTH),
		static_cast<float>(this->currentFrame * FRAME_HEIGHT),
		static_cast<float>(FRAME_WIDTH),
		static_cast<float>(FRAME_HEIGHT)
	};

	DrawTexturePro(
		this->texture,
		sourceRect,
		{this->position.x, this->position.y, static_cast<float>(FRAME_WIDTH), static_cast<float>(FRAME_HEIGHT)},
		{static_cast<float>(FRAME_WIDTH) / 2, static_cast<float>(FRAME_HEIGHT) / 2},
		0.f, WHITE
	);
}