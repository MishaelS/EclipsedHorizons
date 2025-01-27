#include "audio_manager.hpp"

AudioManager::AudioManager() {
	InitAudioDevice();
}

AudioManager::~AudioManager() {
	unloadAllSounds();
	CloseAudioDevice();
}

AudioManager& AudioManager::getInstance() {
	static AudioManager instance;
	return instance;
}

void AudioManager::loadSound(const std::string& key, const std::string& path) {
	if (this->sounds.find(key) == this->sounds.end()) {
		this->sounds[key] = LoadSound(path.c_str());
	}
}

void AudioManager::playSound(const std::string& key) {
	if (this->sounds.find(key) != this->sounds.end()) {
		PlaySound(this->sounds[key]);
	}
}

void AudioManager::unloadSound(const std::string& key) {
	if (this->sounds.find(key) != this->sounds.end()) {
		UnloadSound(this->sounds[key]);
		this->sounds.erase(key);
	}
}

void AudioManager::unloadAllSounds() {
	for (auto& sound : this->sounds) {
		UnloadSound(sound.second);
	}
	this->sounds.clear();
}