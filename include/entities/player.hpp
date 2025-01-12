#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/entities/entity.hpp"

class Player : public Entity {
public:
	Player( Vector2 position,
			const std::string& texturePath,
			Vector2 frameSize,
			float movementSpeed=68.f,
			float animationSpeed=0.20f );
	virtual ~Player();

	void loadTexture(const std::string& path) override; // Загружает текстуру игрока
	void handleCollision(Entity* entity) override; // Обрабатывает столкновение игрока с другой сущностью

	void handleInput(); // Обрабатывает ввод игрока
	void update(float deltaTime) override; // Обновляет состояние игрока
	void render() override; // Отрисовывает игрока

private:
	void updateState() override; // Обновляет состояние игрока
	void updateAnimation(float deltaTime) override; // Обновляет анимацию игрока
	void updateMovement(float deltaTime) override; // Обновляет движение игрока
};