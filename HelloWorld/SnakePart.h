#pragma once
#include "Game.h"
#include "Constants.h"
using namespace Play;

class SnakePart
{
public:

	//Am Thepphithak Seekaew
	Point2D position{width - 200, height - 180};
	bool SnakeOnMap;
	int SnakeRadius = 12;
	void DrawSnake();
};

