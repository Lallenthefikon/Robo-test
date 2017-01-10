#include "EntitySelector.h"


EntitySelector::EntitySelector(MapEditorRescorces* mapeditorRescorces, int iStartpoint) :
mBackgroundHud(mapeditorRescorces->getTexture(iStartpoint)),
mSprites()
{
	loadSprites(mapeditorRescorces, iStartpoint);
}


EntitySelector::~EntitySelector()
{
}

const sf::IntRect EntitySelector::getRect(){
	return mBackgroundHud.getTextureRect();
}

void EntitySelector::render(sf::RenderWindow& window){
	window.draw(mBackgroundHud);
	for (int i = 0; i < mSprites.size(); i++){
		window.draw(*mSprites[i]);
	}
}

// Privates

void EntitySelector::loadSprites(MapEditorRescorces* mapeditorRescorces, int iStartpoint){
	mSprites.push_back(new sf::Sprite(mapeditorRescorces->getTexture(iStartpoint + 1)));
	mSprites.back()->setPosition(200, 200);

	mSprites.push_back(new sf::Sprite(mapeditorRescorces->getTexture(iStartpoint + 2)));
	mSprites.back()->setPosition(1000, 200);
}

