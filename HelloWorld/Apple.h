#pragma once
#include "Game.h"
#include "Constants.h"

class Apple
{
public:
	
	Point2D position;
	bool appleOnMap;
	int appleRadius= 10;

	void DrawApple(); //Dennis
	void RandomizePosition();

};

