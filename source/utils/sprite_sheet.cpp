#include "sprite_sheet.hpp"

SpriteSheet::SpriteSheet(const std::string& texturePath, Vector2 position, Vector2 frameSize)
: texture(LoadTexture(texturePath.c_str())), position(position), frameSize(frameSize){}

SpriteSheet::~SpriteSheet() {
	UnloadTexture(texture);
}

Texture2D SpriteSheet::getTexture() const { return this->texture; }
Vector2 SpriteSheet::getFrameSize() const { return this->frameSize; }
float SpriteSheet::getFrameDuration() const { return this->frameDuration; }
float SpriteSheet::getAnimationTimer() const { return this->animationTimer; }
int SpriteSheet::getCurrentFrame() const { return this->currentFrame; }
bool SpriteSheet::getIsPlaying() const { return this->isPlaying; }
bool SpriteSheet::getLoop() const { return this->loop; }

void SpriteSheet::setTexture(const std::string& texturePath) { this->texture = texture; }
void SpriteSheet::setFrameSize(Vector2 frameSize) { this->frameSize = frameSize; }
void SpriteSheet::setFrameDuration(float duration) { this->frameDuration = duration; }
void SpriteSheet::setAnimationTimer(float timer) { this->animationTimer = timer; }
void SpriteSheet::setCurrentFrame(int frame) { this->currentFrame = frame; }
void SpriteSheet::setIsPlaying(bool isPlaying) { this->isPlaying = isPlaying; }
void SpriteSheet::setLoop(bool loop) { this->loop = loop; }

void SpriteSheet::play() { this->isPlaying = true; }
void SpriteSheet::stop() { this->isPlaying = false; }
void SpriteSheet::reset() {
	this->currentFrame = 0;
	this->animationTimer = 0.f;
}

void SpriteSheet::update(float deltaTime) {
	if (this->isPlaying) {
		this->animationTimer += deltaTime;

		if (this->animationTimer >= this->frameDuration) {
			this->animationTimer = 0.f;
			this->currentFrame++;

			if (!this->loop && this->currentFrame >= (this->texture.width  / this->frameSize.x) * (this->texture.height / this->frameSize.y)) {
				this->stop();
			} else {
				this->currentFrame %= (this->texture.width / this->frameSize.x) * (this->texture.height / this->frameSize.y);
			}
		}
	}
}

void SpriteSheet::render(Entity& entity) {
	DrawTexturePro(
		this->texture,
		{(float)this->currentFrame, 0,
		 this->frameSize.x, this->frameSize.y},
		{position.x, position.y,
		 this->frameSize.x, this->frameSize.y},
		{this->frameSize.x / 2, this->frameSize.y / 2},
		0.f, WHITE);
}