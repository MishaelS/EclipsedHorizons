#include "entity_layer_manager.hpp"

EntityLayerManager::EntityLayerManager() {}
EntityLayerManager::~EntityLayerManager() {}

void EntityLayerManager::sortEntitiesByHeight(std::vector<Entity*>& entities) {
	std::sort(entities.begin(), entities.end(), [](Entity* entityA, Entity* entityB) {
		return entityA->getPosition().y > entityB->getPosition().y;
	});
}

void EntityLayerManager::updateEntityLayers(std::vector<Entity*>& entities) {
	for (size_t i = 0; i < entities.size(); ++i) {
		for (size_t j = i + 1; j < entities.size(); ++j) {
			Entity* entityA = entities[i];
			Entity* entityB = entities[j];

			float distance = Vector2Distance(entityA->getPosition(), entityB->getPosition());

			if (distance < entityA->getInteractionRadius() || distance < entityB->getInteractionRadius()) {
				if (entityA->getPosition().y > entityB->getPosition().y) {
					std::swap(entities[i], entities[j]);
				}
			}
		}
	}
}