#include "MainMeny.h"

MainMeny::MainMeny() :
mMenyRescourses(),
mSprites(),
mCurrentSprites(),
mBackground(mMenyRescourses.getBackgroundTexture())
{
	loadSprites();
	loadScreen_0();
}


MainMeny::~MainMeny(){
	clearmSprites();
}

//MainMeny* MainMeny::getInstance(){
//	static MainMeny mainmeny;
//	return &mainmeny;
//}

void MainMeny::update(bool mouseKeyEvent, bool keyboardEvent, bool mouseMoveEvent, AbstractGame* roborally){
	if (mouseKeyEvent)
		checkMouse(roborally);
		
}

void MainMeny::render(sf::RenderWindow& window){
	window.draw(mBackground);
	for (int i = 0; i < mCurrentSprites.size(); i++){
		window.draw(*mCurrentSprites[i]);
	}
}


// Privates



void MainMeny::checkMouse(AbstractGame* roborally){
	if (variablesAndConstants::getInstance()->mouseButtonClicked){
		
		switch (checkWhatIsClicked()){
		case 1:
			roborally->exitGame();
			break;
		case 2:
			mMapFilename = "Resources/Maps/Prebuilt maps/Test Map_0.txt";
			roborally->changeGamestate(AbstractGame::BATTLEFIELD, mMapFilename);
			break;
		case 3:
			mMapFilename = "Resources/Maps/Prebuilt maps/Test Map_0.txt";
			roborally->changeGamestate(AbstractGame::MAPEDITOR, mMapFilename);
			break;
		default:
			break;
		}
		variablesAndConstants::getInstance()->mouseButtonClicked = false;
	}

}

void MainMeny::loadSprites(){
	mSprites.push_back(new sf::Sprite(mMenyRescourses.getTexture(0)));
	mSprites.back()->setPosition(200, 200);

	mSprites.push_back(new sf::Sprite(mMenyRescourses.getTexture(1)));
	mSprites.back()->setPosition(800, 200);

	mSprites.push_back(new sf::Sprite(mMenyRescourses.getTexture(2)));
	mSprites.back()->setPosition(500, 500);
}

void MainMeny::loadScreen_0(){
	mCurrentSprites.clear();
	mCurrentSprites.push_back(mSprites[0]);
	mCurrentSprites.push_back(mSprites[1]);
	mCurrentSprites.push_back(mSprites[2]);
}

int MainMeny::checkWhatIsClicked(){
	int v = 0;
	for (int i = 0; i < mCurrentSprites.size(); i++){
		if (GraphicFunctions::getInstance()->isSpriteClicked(&mCurrentSprites[i]->getTextureRect(),
			mCurrentSprites[i]->getPosition(), variablesAndConstants::getInstance()->mousePos))
			v = i + 1;
	}
	return v;
}

void MainMeny::mainMenyEvent(int i){
	switch (i){
	case 0:
		break;


	default:
		break;
	}
}

void MainMeny::clearmSprites(){
	while (!mSprites.empty()){
		delete mSprites.back();
		mSprites.pop_back();
	}
}