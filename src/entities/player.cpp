#include "../include/entities/player.hpp"

Player::Player(Vector2 position, Texture2D spriteSheet, Vector2 frameSize, float movementSpeed, float animationSpeed)
:	Entity(position, spriteSheet, frameSize, movementSpeed, animationSpeed) {

	// Конструктор
}

Player::~Player() {
	// Деструктор
}

void Player::isCollisionWithEntity(Entity* entity) {
	Entity::isCollisionWithEntity(entity);
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

void Player::management() {
	// Управление направлением движения
	// Будет у игрока
	// Движение
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