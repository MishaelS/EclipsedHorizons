#include "Player.hpp"

Player::Player(Texture2D texture, Vector2 position, Rectangle frame, float speed)
:	Entity(texture, position, frame, speed) {}

Player::~Player() {}

float Player::getHealth() const { return this->health; }
float Player::getMaxHealth() const { return this->maxHealth; }

void Player::setHealth(float health) { this->health = health; }
void Player::setMaxHealth(float maxHealth) { this->maxHealth = maxHealth; }

void Player::handleInput() {
	Entity::handleInput();

	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))		{ this->setDirection({ 1.f,  0.f}); }
	else if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))	{ this->setDirection({-1.f,  0.f}); }
	else if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))	{ this->setDirection({ 0.f,  1.f}); }
	else if (IsKeyDown(KEY_UP)   || IsKeyDown(KEY_W))	{ this->setDirection({ 0.f, -1.f}); }
}

void Player::movement(float deltaTime) {
	Entity::movement(deltaTime);
}

void Player::update(float deltaTime) {
	Entity::update(deltaTime);
}

void Player::render() const {
	Entity::render();
}