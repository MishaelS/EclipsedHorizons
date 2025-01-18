#include "game_loop.hpp"

GameLoop::GameLoop() : isRunning(true) {
	this->init();
}

void GameLoop::init() {
	this->world = World();
	this->player = Player();
	this->uiManager = UIManager();
}

void GameLoop::run() {
	float accumulatedTime = 0.f;
	float lastTime = GetTime();

	while (this->isRunning && !WindowShouldClose()) {
		float currentTime = GetTime();
		float deltaTime = currentTime - lastTime;
		lastTime = currentTime;

		accumulatedTime += deltaTime;
		while (accumulatedTime >= FixedTimeStep) {
			accumulatedTime -= FixedTimeStep;
			this->update(deltaTime);
		}

		this->render();
	}
}

void GameLoop::update(float deltaTime) {
	InputHandler::handleInput(this->player);

	this->world.update(deltaTime);
	this->player.update(deltaTime);
}

void GameLoop::render() {
	BeginDrawing();
		ClearBackground(RAYWHITE);

		Renderer::renderWorld(this->world);
		Renderer::renderPlayer(this->player);

		this->uiManager.drawHealthBar(this->player.GetHealth());
		this->uiManager.drawHungerBar(this->player.GetHunger());
	EndDrawing();
}