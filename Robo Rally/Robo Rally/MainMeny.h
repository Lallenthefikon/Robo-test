#pragma once
#include <vector>


#include "GameState.h"
#include "MenyRescourses.h"
#include "variablesAndConstants.h"
#include "GraphicFunctions.h"
#include "AbstractGame.h"

class MainMeny : public GameState
{
public:
	typedef std::vector<sf::Sprite*> Sprites;
	MainMeny();
	~MainMeny();

	virtual void update(bool mouseKeyEvent, bool keyboardEvent, bool mouseMoveEvent, AbstractGame* roborally);
	virtual void render(sf::RenderWindow& window);
private:

	void loadSprites();
	void loadScreen_0();

	void checkMouse(AbstractGame* roborally);
	int checkWhatIsClicked();
	void mainMenyEvent(int i);

	void clearmSprites();
	

	MenyRescourses mMenyRescourses;
	Sprites mSprites;
	Sprites mCurrentSprites;
	sf::Sprite mBackground;

	std::string mMapFilename;
};