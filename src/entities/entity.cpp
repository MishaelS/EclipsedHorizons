#include "../include/entities/entity.hpp"

Entity::Entity(Vector2 position, Texture2D spriteSheet, Vector2 frameSize, float movementSpeed, float animationSpeed)
:	position(position),
	velocity({0.f, 0.f}),
	direction({0.f, 0.f}),
	spriteSheet(spriteSheet),
	frameRect({0, 0, frameSize.x, frameSize.y}),
	frameSize(frameSize),
	isAttacking(false),
	currentAnimation({IDLE, DOWN, 0, 1, 0, animationSpeed}),
	movementSpeed(movementSpeed),
	animationSpeed(animationSpeed),
	animationTimer(0.f),
	tintHitbox({255,   0,   0, 64}),
	tintEntity(WHITE) {

	// Конструктор
}

Entity::~Entity() {
	// Деструктор
}

float Entity::getRaduis() const {
	return (this->frameSize.x / 2.f) / 2.f;
}
float Entity::getRadiusHitbox(float ratio) const {
	return this->getRaduis() / ratio;
}

Vector2 Entity::getPosition() const {
	return this->position;
}

Vector2 Entity::getVelocity() const {
	return this->velocity;
}

Vector2 Entity::getDirection() const {
	return this->direction;
}

void Entity::setPosition(Vector2 position) {
	this->position = position; 
}

void Entity::setVelocity(Vector2 velocity) {
	this->velocity = velocity; 
}

void Entity::setDirection(Vector2 direction) {
	this->direction = direction; 
}

void Entity::updateState() {
	// Обновление состояния анимации
	if (this->direction.x == 0 && this->direction.y == 0) {
		if (this->isAttacking) {
			this->currentAnimation.actionState = ATTACKING;
		} else {
			this->currentAnimation.actionState = IDLE;
		}
	} else {
		this->currentAnimation.actionState = WALKING;
	}

	// Обновление направления взгляда
		 if (this->direction.x > 0) { this->currentAnimation.directState = RIGHT;	}
	else if (this->direction.x < 0) { this->currentAnimation.directState = LEFT;	}
	else if (this->direction.y > 0) { this->currentAnimation.directState = DOWN;	}
	else if (this->direction.y < 0) { this->currentAnimation.directState = UP;		}
}

void Entity::updateAnimation(float deltaTime) {
	// Обновление кадра анимации
	this->animationTimer += deltaTime;
	if (this->animationTimer >= this->currentAnimation.frameDuration) {
		this->animationTimer = 0.f;

		if (this->currentAnimation.currentFrame <  this->currentAnimation.actionState ||
			this->currentAnimation.currentFrame >= this->currentAnimation.actionState + this->currentAnimation.frameCount) {
			this->currentAnimation.currentFrame = this->currentAnimation.actionState - 1;
		}

		this->currentAnimation.currentFrame++;
	}

	this->frameRect.x = this->currentAnimation.currentFrame * this->frameRect.width;
	this->frameRect.x = this->currentAnimation.directState * this->frameRect.height;
}

void Entity::updateMovement(float deltaTime) {
	// Обновление позиции
	this->velocity.x = this->movementSpeed * this->direction.x * deltaTime;
	this->velocity.y = this->movementSpeed * this->direction.y * deltaTime;

	this->position.x += this->velocity.x;
	this->position.y += this->velocity.y;
}

void Entity::update(float deltaTime) {
	this->updateState();
	this->updateAnimation(deltaTime);
	this->updateMovement(deltaTime);
}

void Entity::render() {
	// Отрисовка текущего кадра анимации
	DrawTextureRec(
		this->spriteSheet,
		this->frameRect,
		this->position,
		this->tintEntity
	);

	// Отрисовка граници столкновения
	DrawCircleV(
		this->getPosition(),
		this->getRadiusHitbox(),
		this->tintHitbox
	);
}