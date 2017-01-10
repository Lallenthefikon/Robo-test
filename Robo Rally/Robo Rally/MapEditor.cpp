#include "MapEditor.h"

static const int NrOfTextures = 0;

MapEditor::MapEditor(Map* map) :
mMapEditorRescorces(),
mEntityselector(&mMapEditorRescorces, NrOfTextures),
mMap(map),
mMapname(),
mBackground()
{

}


MapEditor::~MapEditor()
{
}

void MapEditor::update(bool mouseKeyEvent, bool keyboardEvent, bool mouseMoveEvent, AbstractGame* roborally){

}

void MapEditor::render(sf::RenderWindow& window){
	window.draw(mBackground);
	mEntityselector.render(window);
}