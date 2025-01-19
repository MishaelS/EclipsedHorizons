#include "Player.hpp"

Player::Player() {
	this->texture = LoadTexture("../source/assets/sprites/Characters/Basic Charakter Spritesheet.png");
	this->position = {static_cast<float>(SCREEN_WIDTH) / 2, static_cast<float>(SCREEN_HEIGHT) / 2};
	this->frameSize = {static_cast<float>(FRAME_WIDTH), static_cast<float>(FRAME_HEIGHT)};
}

Player::~Player() {
	UnloadTexture(this->texture);
}

void Player::handleInput() {
	if (IsKeyDown(KEY_RIGHT)) {
		this->setAnimationState(ActionState::RUN, DirectionState::RIGHT);
		this->direction = {1, 0};
	} else if (IsKeyDown(KEY_LEFT)) {
		this->setAnimationState(ActionState::RUN, DirectionState::LEFT);
		this->direction = {-1, 0};
	} else if (IsKeyDown(KEY_UP)) {
		this->setAnimationState(ActionState::RUN, DirectionState::UP);
		this->direction = {0, 1};
	} else if (IsKeyDown(KEY_DOWN)) {
		this->setAnimationState(ActionState::RUN, DirectionState::DOWN);
		this->direction = {0, -1};
	} else {
		this->setAnimationState(ActionState::IDLE, this->directionState);
		this->direction = {0, 0};
	}
}

void Player::update(float deltaTime) {
	this->handleInput();
	Entity::update(deltaTime);
}

void Player::render() const {
	Entity::render();
}