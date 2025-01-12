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

// Типы тайлов
enum TileType {
	TILE_EMPTY,	// Пустоа
	TILE_WATER,	// Вода
	TILE_SAND,	// Песок
	TILE_GRASS,	// Трава
	TILE_TREE,	// Дерево
	TILE_STONE	// Камень
};

// Направления взгляда сущности
enum DirectionState {
	DOWN,
	RIGHT,
	LEFT,
	UP
};

// Состояния действий сущности
enum ActionState {
	IDLE		= 0,
	WALKING		= 2,
	RUNNING		= 2,
	ATTACKING	= 4,
	DEAD		= 0,
	INTERACTING = 0
};

// Данные анимации
struct AnimationData {
	ActionState		actionState; // Состояние действия
	DirectionState	directState; // Направление взгляда
	int frameStart;		 // Начальный кадр
	int frameCount;		 // Количество кадров
	int currentFrame;	 // Текущий кадр
	float frameDuration; // Длительность кадра
};