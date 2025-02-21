#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

#include "../ui/ui_manager.hpp"
#include "../graphics/audio_manager.hpp"
#include "../graphics/texture_manager.hpp"
#include "../graphics/camera_controller.hpp"
#include "../graphics/entity_layer_manager.hpp"

#include "../entities/collision_manager.hpp"
#include "../entities/player.hpp"

class Scene {
public:
	Scene();
	virtual ~Scene();
	
	void init();

	void addEntity(Entity* entity);
	void removeEntity(Entity* entity);

	void handleInput();
	void update(float deltaTime);
	void render();

private:
	void shutDown();
	void drawGrid(int cellSize, int screenWidth, int screenHeight, Color gridColor);

	UIManager uiManager;
	AudioManager& audioManager;
	TextureManager& textureManager;
	Texture2D playerTexture;

	Player* player;
	CameraController* gameCamera;

	EntityLayerManager entityLayerManager;
	CollisionManager collisionManager;
	std::vector<Entity*> entities;
};