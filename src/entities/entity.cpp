#include "../include/entities/entity.hpp"

Entity::Entity(Vector2 position, const std::string& texturePath, Vector2 frameSize, Level* level, float movementSpeed, float animationSpeed)
:	position(position), frameSize(frameSize), isAttacking(false),
	movementSpeed(movementSpeed), animationSpeed(animationSpeed),
	hitboxColor({255, 255, 255,  64}),
	entityColor({255, 255, 255, 255}),
	level(level) {

	this->loadTexture(texturePath);
	this->frameRect = {0, 0, frameSize.x, frameSize.y};
	this->currentAnimation = {IDLE, DOWN, 0, 1, 0, animationSpeed};
}

Entity::~Entity() {}

float Entity::getRadius() const {
	return (this->frameSize.x / 2.f) / 2.f;
}
float Entity::getRadiusHitbox(float ratio) const {
	return this->getRadius() / ratio;
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

void Entity::checkTileCollision(const Level& level) {
	std::vector<Vector2> collidableTiles = level.getCollidableTilesAround(this->getPosition(), this->getRadius());

	for (const Vector2& tilePos : collidableTiles) {
		Rectangle tileRect = {
			tilePos.x,
			tilePos.y,
			static_cast<float>(level.getTileSize()),
			static_cast<float>(level.getTileSize())
		};

		Vector2 tileCenter = {
			tilePos.x + level.getTileSize() / 2.f,
			tilePos.y + level.getTileSize() / 2.f
		};

		float distance = Vector2Distance(this->position, tileCenter);
		float radiusSum = this->getRadius() + level.getTileSize() / 2.5f;

		if (distance <= radiusSum) {
			Vector2 normal = Vector2Normalize(Vector2Subtract(this->position, tileCenter));

			float dx = this->position.x - tileCenter.x;
			float dy = this->position.y - tileCenter.y;

			float absDx = fabsf(dx);
			float absDy = fabsf(dy);

			if (absDx > absDy) {
				if (dx > 0) {
					this->position.x = tileRect.x + tileRect.width + this->getRadius();
				} else {
					this->position.x = tileRect.x - this->getRadius();
				}
			} else {
				if (dy > 0) {
					this->position.y = tileRect.y + tileRect.height + this->getRadius();
				} else {
					this->position.y = tileRect.y - this->getRadius();
				}
			}
		}
	}
}

void Entity::loadTexture(const std::string& path) {
	this->spriteSheet = LoadTexture(path.c_str());
	if (this->spriteSheet.id == 0) {
		TraceLog(LOG_ERROR, "Failed to load texture: %s", path.c_str());
	}
}

void Entity::handleCollision(Entity* entity) {
	float distance = Vector2Distance(this->getPosition(), entity->getPosition());
	float radiusSum = this->getRadiusHitbox() + entity->getRadiusHitbox();

	if (distance <= radiusSum) {
		Vector2 normal = Vector2Normalize(Vector2Subtract(this->getPosition(), entity->getPosition()));
		float penetrationDepth = radiusSum - distance;

		this->setPosition(Vector2Add(this->getPosition(), Vector2Scale(normal, penetrationDepth * 0.5f)));
		entity->setPosition(Vector2Subtract(entity->getPosition(), Vector2Scale(normal, penetrationDepth * 0.5f)));
	}
}

void Entity::updateState() {
	if (this->direction.x == 0 && this->direction.y == 0) {
		if (this->isAttacking) {
			this->currentAnimation.actionState = ATTACKING;
		} else {
			this->currentAnimation.actionState = IDLE;
		}
	} else {
		this->currentAnimation.actionState = WALKING;
	}

		 if (this->direction.x > 0) { this->currentAnimation.directState = RIGHT;	}
	else if (this->direction.x < 0) { this->currentAnimation.directState = LEFT;	}
	else if (this->direction.y > 0) { this->currentAnimation.directState = DOWN;	}
	else if (this->direction.y < 0) { this->currentAnimation.directState = UP;		}
}

void Entity::updateAnimation(float deltaTime) {
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
	this->frameRect.y = this->currentAnimation.directState * this->frameRect.height;
}

void Entity::updateMovement(float deltaTime) {
	Vector2 newPosition = this->position;

	// Вычисляем новую позицию на основе скорости и направления
	newPosition.x += this->movementSpeed * this->direction.x * deltaTime;
	newPosition.y += this->movementSpeed * this->direction.y * deltaTime;

	// Проверяем столкновения с тайлами
	std::vector<Vector2> collidableTiles = level->getCollidableTilesAround(newPosition, this->getRadius());

	for (const Vector2& tilePos : collidableTiles) {
		Rectangle tileRect = {
			tilePos.x,
			tilePos.y,
			static_cast<float>(level->getTileSize()),
			static_cast<float>(level->getTileSize())
		};

		Rectangle entityRect = {
			newPosition.x - this->frameSize.x / 2.f,
			newPosition.y - this->frameSize.y / 2.f,
			this->frameSize.x,
			this->frameSize.y
		};

		if (CheckCollisionRecs(entityRect, tileRect)) {
			// Если столкновение произошло, корректируем позицию только в направлении движения
			if (this->direction.x != 0) {
				newPosition.x = this->position.x; // Отменяем движение по X
			}
			if (this->direction.y != 0) {
				newPosition.y = this->position.y; // Отменяем движение по Y
			}
		}
	}

	// Обновляем позицию сущности
	this->position = newPosition;
}

void Entity::update(float deltaTime) {
	this->updateState();
	this->updateAnimation(deltaTime);
	this->updateMovement(deltaTime);
	this->checkTileCollision(*level);
}

void Entity::render() {
	DrawTexturePro(
		this->spriteSheet,
		{this->frameRect.x, this->frameRect.y,
		 (float)this->frameRect.width, (float)this->frameRect.height},
		{this->position.x - (this->frameRect.width  / 2.f), this->position.y - (this->frameRect.height / 2.f),
		 this->frameRect.width, this->frameRect.height},
		{0.f, 0.f},
		0.f,
		this->entityColor
	);

	DrawCircleV(
		this->getPosition(),
		this->getRadiusHitbox(),
		this->hitboxColor
	);
}