#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "../entities/world.hpp"
#include "../entities/Entity.hpp"

class Renderer {
public:
	static void renderWorld(const World& world);
	static void renderEntity(const Entity& entity);
};