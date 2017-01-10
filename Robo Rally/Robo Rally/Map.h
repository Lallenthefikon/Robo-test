#pragma once

#include "Entity.h"

#include <vector>

class Map
{
public:
	Map();
	~Map();
	void addGridRect(sf::Vector2i startingPoint, sf::Vector2i size);
private:

	typedef std::vector<Entity*> Entities;
	typedef std::vector<Entities*> yGrid;
	typedef std::vector<yGrid*> xGrid;
	xGrid* mGrid;
};

