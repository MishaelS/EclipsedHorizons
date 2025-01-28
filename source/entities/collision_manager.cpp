#include "collision_manager.hpp"
#include "Entity.hpp"

CollisionManager::CollisionManager() {}
CollisionManager::~CollisionManager() {}

void CollisionManager::checkAndResolveCollisions(std::vector<Entity*>& entities) {
	for (size_t i = 0; i < entities.size(); ++i) {
		for (size_t j = i + 1; j < entities.size(); ++j) {
			if (entities[i]->checkCollision(*entities[j])) {
				entities[i]->resolveCollision(*entities[j]);
			}
		}
	}
}