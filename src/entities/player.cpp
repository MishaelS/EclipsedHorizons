#include "../include/entities/player.hpp"

Player::Player(Vector2 position, const std::string& texturePath, Vector2 frameSize, float movementSpeed, float animationSpeed)
:	Entity(position, texturePath, frameSize, movementSpeed, animationSpeed) {

	// Конструктор
}

Player::~Player() {
	// Деструктор
}

void Player::loadTexture(const std::string& path) {
	Entity::loadTexture(path);
}

void Player::handleCollision(Entity* entity) {
	Entity::handleCollision(entity);
}

void Player::updateState() {
	Entity::updateState();
}

void Player::updateAnimation(float deltaTime) {
	Entity::updateAnimation(deltaTime);
}

void Player::updateMovement(float deltaTime) {
	Entity::updateMovement(deltaTime);
}

void Player::handleInput() {
	this->setDirection({0.f, 0.f});

	if (IsKeyDown(KEY_SPACE) || IsKeyDown(KEY_X)) {
		isAttacking = true;
	} else {
		isAttacking = false;
		
		if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) { this->setDirection({ 1.f, 0.f}); }
		if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT) ) { this->setDirection({-1.f, 0.f}); }
		if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN) ) { this->setDirection({ 0.f, 1.f}); }
		if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)   ) { this->setDirection({ 0.f,-1.f}); }
	}
}

void Player::update(float deltaTime) {
	Entity::update(deltaTime);
}

void Player::render() {
	Entity::render();
}