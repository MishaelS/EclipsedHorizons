#include "../include/graphics/level.hpp"

Level::Level(unsigned int width, unsigned int height, unsigned int tileSize)
:	width(width), height(height), tileSize(tileSize) {
	
	this->tiles.resize(width, std::vector<TileType>(height, TILE_EMPTY));
	this->tilesTrees.resize(width, std::vector<unsigned int>(height, 0));
	this->tilesStone.resize(width, std::vector<unsigned int>(height, 0));

	this->noiseGenerator.SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	this->noiseGenerator.SetFrequency(0.05f);

	this->loadTextures();
}

Level::~Level() {
	UnloadTexture(this->waterTexture);
	UnloadTexture(this->sandTexture);
	UnloadTexture(this->grassTexture);
	UnloadTexture(this->treeTexture);
	UnloadTexture(this->stoneTexture);
}

unsigned int Level::getTileSize() const {
	return this->tileSize;
}

TileType Level::getTileType(int x, int y) const {
	if (x >= 0 && x < this->width && y >= 0 && y < this->height) {
		return this->tiles[x][y];
	}

	return TILE_EMPTY;
}

bool Level::isTileCollidable(int x, int y) const {
	TileType tile = this->getTileType(x, y);
	return tile == TILE_WATER || this->tilesStone[x][y] == 1 || this->tilesTrees[x][y] == 1;
}

std::vector<Vector2> Level::getCollidableTilesAround(Vector2 position, float radius) const {
	std::vector<Vector2> collidableTiles;

	// Определяем границы области, в которой нужно проверять тайлы
	int minX = static_cast<int>((position.x - radius) / this->tileSize);
	int maxX = static_cast<int>((position.x + radius) / this->tileSize);
	int minY = static_cast<int>(((position.y + 8.f) - radius) / this->tileSize);
	int maxY = static_cast<int>(((position.y + 8.f) + radius) / this->tileSize);

	// Ограничиваем границы уровнем
	minX = std::max(minX, 0);
	maxX = std::min(maxX, static_cast<int>(width) - 1);
	minY = std::max(minY, 0);
	maxY = std::min(maxY, static_cast<int>(height) - 1);

	// Проверяем только тайлы в этой области
	for (int x = minX; x <= maxX; ++x) {
		for (int y = minY; y <= maxY; ++y) {
			if (this->isTileCollidable(x, y)) {
				collidableTiles.push_back({
					static_cast<float>(x * this->tileSize),
					static_cast<float>(y * this->tileSize)
				});
			}
		}
	}

	return collidableTiles;
}

void Level::loadTextures() {
	this->waterTexture	= LoadTexture("assets/Tilesets/waterT.png");
	this->sandTexture	= LoadTexture("assets/Tilesets/sandT.png");
	this->grassTexture	= LoadTexture("assets/Tilesets/grassT.png");
	this->treeTexture	= LoadTexture("assets/Tilesets/treeT.png");
	this->stoneTexture	= LoadTexture("assets/Tilesets/stoneT.png");
}

void Level::generateTerrain() {
	for (int x = 0; x < this->width; x++) {
		for (int y = 0; y < this->height; y++) {
			float noiseValue = this->noiseGenerator.GetNoise((float)x, (float)y);

			if (noiseValue < -0.2f) {
				this->tiles[x][y] = TILE_WATER;
			} else if (noiseValue < -0.08f) {
				this->tiles[x][y] = TILE_SAND;
			} else {
				this->tiles[x][y] = TILE_GRASS;
			}
		}
	}
}

void Level::generateObjects() {
	for (int x = 0; x < this->width; x++) {
		for (int y = 0; y < this->height; y++) {
			if (this->tiles[x][y] == TILE_GRASS && this->noiseGenerator.GetNoise((float)x * 3, (float)y * 3) > 0.1f) {
				this->tilesStone[x][y] = 1;
			}

			if (this->tiles[x][y] == TILE_GRASS && this->tilesStone[x][y] != 1 && this->noiseGenerator.GetNoise((float)x * 2, (float)y * 2) > 0.05f) {
				this->tilesTrees[x][y] = 1;
			}
		}
	}
}

void Level::generate() {
	this->generateTerrain();
	this->generateObjects();
}

void Level::render(const VisibilityManager& visibilityManager) {
	for (int x = 0; x < this->width; x++) {
		for (int y = 0; y < this->height; y++) {
			Vector2 position = {(float)(x * this->tileSize), (float)(y * this->tileSize)};
			float radius = this->tileSize / 1.2f;

			if (visibilityManager.isVisible(position, radius)) {
				TileType tile = this->tiles[x][y];

				if (tile == TILE_WATER) DrawTexture(waterTexture, position.x, position.y, WHITE);
				else if (tile == TILE_SAND) DrawTexture(sandTexture, position.x, position.y, WHITE);
				else if (tile == TILE_GRASS) DrawTexture(grassTexture, position.x, position.y, WHITE);

				if (this->tilesStone[x][y] == 1) DrawTexture(stoneTexture, position.x, position.y, WHITE);
				if (this->tilesTrees[x][y] == 1) DrawTexture(treeTexture, position.x, position.y, WHITE);
			}
		}
	}
}
