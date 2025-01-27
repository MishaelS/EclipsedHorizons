#pragma once

#include "../includes.hpp"
#include "../globals.hpp"

class AudioManager {
public:
	static AudioManager& getInstance();

	void loadSound(const std::string& key, const std::string& path);
	void playSound(const std::string& key);
	void unloadSound(const std::string& key);
	void unloadAllSounds();

private:
	AudioManager();
	~AudioManager();

	std::unordered_map<std::string, Sound> sounds;
};