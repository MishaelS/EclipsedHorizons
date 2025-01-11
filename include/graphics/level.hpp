#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

class Level {
public:
	Level(unsigned int width, unsigned int height, unsigned int tileSize);
	~Level();

    // Получение информации о тайлах
	TileType getTileType(int x, int y) const;
	bool isTileCollidable(int x, int y) const;

	void generate();	// Генерация уровня
	void render();		// Отрисовка уровня

private:
	void loadTextures();	// Загрузка текстур
	void generateTerrain();	// Генерация ландшафта
	void generateObjects();	// Генерация объектов (деревья, камни и т.д.)

	unsigned int width, height, tileSize;
	std::vector<std::vector<TileType>> tiles;	// Основные тайлы
	std::vector<std::vector<unsigned int>> tilesTrees;	// Деревья
	std::vector<std::vector<unsigned int>> tilesStone;	// Камни

	Texture2D waterTexture, sandTexture, grassTexture, treeTexture, stoneTexture;
	FastNoiseLite noiseGenerator; // Генератор шума для создания ландшафта

};