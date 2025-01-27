#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class TextureManager {
public:
	static TextureManager& getInstance();

	Texture2D loadTexture(const std::string& path);
	void unloadTexture(const std::string& path);
	void unloadAllTextures();

private:
	TextureManager() = default;
	~TextureManager();

	std::unordered_map<std::string, Texture2D> textures;
};