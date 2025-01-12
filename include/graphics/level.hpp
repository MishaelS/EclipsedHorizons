#pragma once

#include "../include/utils/includes.hpp"
#include "../include/utils/globals.hpp"

#include "../include/graphics/visibility_manager.hpp"

class Level {
public:
	Level(unsigned int width, unsigned int height, unsigned int tileSize);
	~Level();

	TileType getTileType(int x, int y) const; // Возвращает тип тайла по координатам
	bool isTileCollidable(int x, int y) const; // Проверяет, является ли тайл коллизионным

	void generate(); // Генерирует уровень
	void render(const VisibilityManager& visibilityManager); // Отрисовывает уровень

private:
	void loadTextures();	// Загружает текстуры для уровня
	void generateTerrain();	// Генерирует ландшафт уровня
	void generateObjects();	// Генерирует объекты на уровне (деревья, камни и т.д.)

	unsigned int width, height, tileSize; // Размеры уровня и тайлов
	std::vector<std::vector<TileType>> tiles; // Основные тайлы
	std::vector<std::vector<unsigned int>> tilesTrees; // Деревья
	std::vector<std::vector<unsigned int>> tilesStone; // Камни

	Texture2D waterTexture, sandTexture, grassTexture, treeTexture, stoneTexture; // Текстуры уровня
	FastNoiseLite noiseGenerator; // Генератор шума для создания ландшафта
};