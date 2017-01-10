#pragma once

#include "variablesAndConstants.h"
#include "GraphicFunctions.h"

class Camera
{
public:
	~Camera();
	static Camera* getInstance();

	void update(bool mouseKeyEvent, bool keyboardEvent, bool mouseMoveEvent);
	void setWindow(sf::RenderWindow* window);

private:
	Camera();

	void mouseViewMove();
	bool mouseInBounds();

	void updateWindow();

	sf::RenderWindow* mWindow;
	sf::View mCurrentView;

	float mZoom;

	bool mMouseLeftOfWindow;
	bool mMouseRightOfWindow;
	bool mMouseTopOfWindow;
	bool mMouseBottomOfWindow;
	bool mWindowNeedUpdate;
};

