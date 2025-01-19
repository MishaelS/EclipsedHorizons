#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "Entity.hpp"

class Player : public Entity {
public:
	Player();
	virtual ~Player();

	virtual void update(float deltaTime) override;
	virtual void render() const override;

private:
	void handleInput();
};