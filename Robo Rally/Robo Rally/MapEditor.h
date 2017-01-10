#pragma once

#include "GameState.h"
#include "Map.h"
#include "EntitySelector.h"
#include "MapEditorRescorces.h"

class MapEditor : public GameState
{
public:
	MapEditor(Map* map);
	virtual ~MapEditor();

	virtual void update(bool mouseKeyEvent, bool keyboardEvent, bool mouseMoveEvent, AbstractGame* roborally);
	virtual void render(sf::RenderWindow& window);

private:

	void writeMapToFile();

	MapEditorRescorces mMapEditorRescorces;
	EntitySelector mEntityselector;

	std::string mMapname;
	Map* mMap;

	sf::Sprite mBackground;

	
};

