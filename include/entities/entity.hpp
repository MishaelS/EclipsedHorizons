#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/graphics/level.hpp"

class Entity {
public:
	Entity( Vector2 position,
			const std::string& texturePath,
			Vector2 frameSize,
			Level* level,
			float movementSpeed=68.f,
			float animationSpeed=0.20f );
	virtual ~Entity();

	virtual float getRadius() const; // Возвращает радиус сущности
	virtual float getRadiusHitbox(float ratio=1.f) const; // Возвращает радиус хитбокса

	virtual Vector2 getPosition() const; // Возвращает текущую позицию сущности
	virtual Vector2 getVelocity() const;  // Возвращает текущую скорость сущности
	virtual Vector2 getDirection() const; // Возвращает текущее направление движения
	
	virtual void setPosition(Vector2 position); // Устанавливает позицию сущности
	virtual void setVelocity(Vector2 velocity);	  // Устанавливает скорость сущности
	virtual void setDirection(Vector2 direction); // Устанавливает направление движения

	virtual void loadTexture(const std::string& path); // Загружает текстуру сущности
	virtual void handleCollision(Entity* entity); // Обрабатывает столкновение с другой сущностью

	virtual void update(float deltaTime); // Обновляет состояние сущности
	virtual void render(); // Отрисовывает сущность

protected:
	virtual void checkTileCollision(const Level& level); // Метод, который будет проверять столкновения с тайлами

	virtual void updateState(); // Обновляет состояние сущности (анимация, движение и т.д.)
	virtual void updateAnimation(float deltaTime); // Обновляет анимацию сущности
	virtual void updateMovement(float deltaTime); // Обновляет движение сущности

	Level* level; // Уровень (мир) для проверки коллизии

	Vector2 position;  // Позиция сущности
	Vector2 velocity;  // Скорость сущности
	Vector2 direction; // Направление движения

	float movementSpeed;  // Скорость движения
	float animationSpeed; // Скорость анимации
	float animationTimer; // Таймер анимации

	Texture2D spriteSheet; // Текстура сущности
	Rectangle frameRect;   // Прямоугольник текущего кадра
	Vector2 frameSize;	   // Размер кадра

	bool isAttacking; // Флаг, указывающий, атакует ли сущность
	AnimationData currentAnimation; // Данные текущей анимации

	Color hitboxColor; // Цвет хитбокса
	Color entityColor; // Цвет сущности
};