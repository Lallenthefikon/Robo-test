#pragma once

#include "Map.h"
#include "GameState.h"
#include "EntityHandler.h"

class Battlefield : public GameState
{
public:
	Battlefield(Map* map);
	virtual ~Battlefield();

	virtual void update(bool mouseKeyEvent, bool keyboardEvent, bool mouseMoveEvent, AbstractGame* roborally);
	virtual void render(sf::RenderWindow& window);

private:
	Map* mMap;

};

