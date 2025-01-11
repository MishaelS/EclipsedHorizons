#pragma once

// Размер экрана
extern const unsigned int ScreenWidth;
extern const unsigned int ScreenHeight;

// Размер мира
extern const unsigned int WorldWidth;
extern const unsigned int WorldHeight;

// Скорость обновления экрана
extern const unsigned int FrameRate;

// Размер плитки
extern const unsigned int TileSize;

// Перечисление типо тайлов для растоновки мира
enum TileType {
	TILE_EMPTY, // Пустоа
	TILE_WATER, // Вода
	TILE_SAND,  // Песок
	TILE_GRASS, // Трава
	TILE_TREE,	// Дерево
	TILE_STONE  // Камень
};

// Состояние направление взгляда сущьности для анимации
// SpriteSheet направление взгляда сущьности расположенны вертикально
enum DirectionState {
	DOWN,
	RIGHT,
	LEFT,
	UP
};

// Состояние действия сущьности для анимации
// SpriteSheet действия сущьности расположенны горезонтально
enum ActionState {
	IDLE		= 0,
	WALKING		= 2,
	// RUNNING		= 2,
	ATTACKING	= 4,
	// DEAD		= 0,
	// INTERACTING = 0
};

struct AnimationData {
	ActionState		actionState;
	DirectionState	directState;
	int frameStart;
	int frameCount;
	int currentFrame;
	float frameDuration;
};