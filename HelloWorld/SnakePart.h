#pragma once
#include "Game.h"
#include "Constants.h"
using namespace Play;


class SnakePart
{

public:
	SnakePart(); 

	Play::Colour color=Play::Colour(0,0,0);
	//Am Thepphithak Seekaew
	Point2D position;
	
	int SnakeRadius = 10;
	void DrawSnake();

	
};
