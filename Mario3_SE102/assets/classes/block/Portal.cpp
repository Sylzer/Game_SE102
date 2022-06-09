#include "../Entity.h"
#include "Portal.h"

Texture* Portal::_portalTexture = nullptr;

void Portal::_ParseSprites(std::string line) {
	_animatedSprite.ParseSprites(line, _portalTexture);
}

Portal::Portal() {
	isPassThroughable = true;
}

Portal::~Portal() {}

unsigned int Portal::GetSceneID() const {
	return std::stoul(_extraData.front());
}



void Portal::HandleStates() {}

void Portal::HandleCollisionResult(LPCOLLISIONEVENT, D3DXVECTOR2&, D3DXVECTOR2&, D3DXVECTOR2&, D3DXVECTOR2&) {}

void Portal::Update(DWORD, std::vector<Entity*>*, std::vector<Entity*>*, Grid*) {}

void Portal::Render() {
	//_animatedSprite.PlaySpriteAnimation("Portal", _position);
}

void Portal::Release() {
	_animatedSprite.Release();
	_portalTexture = nullptr;
}