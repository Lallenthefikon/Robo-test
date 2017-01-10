#include "Map.h"


Map::Map():
mGrid(new xGrid){
}


Map::~Map(){
}

void Map::addGridRect(sf::Vector2i startingPoint, sf::Vector2i size){
	int xDifference = startingPoint.x + size.x - mGrid->size();
	int yDifference;
	if (xDifference > 0){
		for (int i = xDifference; i > 0; i--){
			mGrid->push_back(new yGrid);
		}
	}
	for (int i = startingPoint.x; i < startingPoint.x + size.x; i++){
		yDifference = startingPoint.y - mGrid->at(i)->size();
		if (yDifference > 0){
			for (int index3 = yDifference; index3 > 0; index3--){
				mGrid->at(i)->push_back(0);
			}
		}
		for (int index4 = 0; index4 < size.y; index4++){
			mGrid->at(i)->push_back(new Entities);
		}
	}
}