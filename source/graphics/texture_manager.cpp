#include "texture_manager.hpp"

TextureManager::~TextureManager() {
	this->unloadAllTextures();
}

TextureManager& TextureManager::getInstance() {
	static TextureManager instance;
	return instance;
}

Texture2D TextureManager::loadTexture(const std::string& path) {
	if (this->textures.find(path) == this->textures.end()) {
		this->textures[path] = LoadTexture(path.c_str());
	}
	
	return this->textures[path];
}

void TextureManager::unloadTexture(const std::string& path) {
	if (this->textures.find(path) != this->textures.end()) {
		UnloadTexture(this->textures[path]);
		this->textures.erase(path);
	}
}

void TextureManager::unloadAllTextures() {
	for (auto& texture : this->textures) {
		UnloadTexture(texture.second);
	}

	this->textures.clear();
}
