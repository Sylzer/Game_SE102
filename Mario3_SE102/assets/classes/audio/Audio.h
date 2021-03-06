#pragma once

enum class AudioType {
	//Scenes
	AUDIO_TYPE_INTRO,
	AUDIO_TYPE_MAP,
	AUDIO_TYPE_STAGE_1_1,

	AUDIO_TYPE_STAGE_PCOIN,
	AUDIO_TYPE_STAGE_HURRY,
	AUDIO_TYPE_STAGE_END,
	//Effects
	AUDIO_TYPE_1UP,
	AUDIO_TYPE_1UPGLITCH,
	AUDIO_TYPE_BLOCKBREAK,
	AUDIO_TYPE_BUMP,
	AUDIO_TYPE_COIN,
	AUDIO_TYPE_DEATH,
	AUDIO_TYPE_FIREBALL,
	AUDIO_TYPE_KICK,
	AUDIO_TYPE_LEVELSTART,
	AUDIO_TYPE_MAPMOVE,
	AUDIO_TYPE_MAPSTART,
	AUDIO_TYPE_JUMP,
	AUDIO_TYPE_PIPE,
	AUDIO_TYPE_POWERUP,
	AUDIO_TYPE_SKID,
	AUDIO_TYPE_SQUISH,
	AUDIO_TYPE_TRANSFORM,
	AUDIO_TYPE_MUSHROOMAPPEARS,
	AUDIO_TYPE_TAILATTACK,
	AUDIO_TYPE_PMETER,
	AUDIO_TYPE_THWOMP,

};

class Audio {
public:
	virtual ~Audio() {}

	virtual void Initialize() = 0;

	//Type, loop, pitch, volume
	virtual void PlayAudio(AudioType, bool = false, float = 1.0f, float = 100.0f) = 0;
	virtual void PauseAudio(AudioType) = 0;
	virtual void StopAudio(AudioType) = 0;
	virtual void StopAll() = 0;

	virtual void Release() = 0;
};