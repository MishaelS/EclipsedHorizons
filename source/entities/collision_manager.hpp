#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "Entity.hpp"

class CollisionManager {
public:
	CollisionManager();
	~CollisionManager();

	void checkAndResolveCollisions(std::vector<Entity*>& entities);
};