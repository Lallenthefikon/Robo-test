#pragma once

#include "Hud.h"
#include "MapEditorRescorces.h"

#include <vector>

class EntitySelector : public Hud
{
public:
	EntitySelector(MapEditorRescorces* mapeditorRescorces, int iStartpoint);
	virtual ~EntitySelector();

	virtual const sf::IntRect getRect();
	virtual void render(sf::RenderWindow& window);

private:

	void loadSprites(MapEditorRescorces* mapeditorRescorces, int iStartpoint);

	sf::Sprite mBackgroundHud;
	typedef std::vector<sf::Sprite*> Sprites;
	Sprites mSprites;
};

