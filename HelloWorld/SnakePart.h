#pragma once
#include "Game.h"
#include "Constants.h"
using namespace Play;

class SnakePart
{
public:
	SnakePart();
	//Am Thepphithak Seekaew
	Point2D position = {width - 200, height - 180};
	Colour theSnakeColour = cGreen;
	bool SnakeOnMap;
	int SnakeRadius = 10;
	void DrawSnake();
	void RandomSetColour();
};
