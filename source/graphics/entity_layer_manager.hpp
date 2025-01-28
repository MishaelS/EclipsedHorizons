#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "../entities/entity.hpp"

class EntityLayerManager {
public:
	EntityLayerManager();
	~EntityLayerManager();

	void sortEntitiesByHeight(std::vector<Entity*>& entities);
	void updateEntityLayers(std::vector<Entity*>& entities);
};