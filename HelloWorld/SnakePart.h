#pragma once

#include "GameObject.h"


class SnakePart
{

public:
	SnakePart();

	Play::Colour color = Play::Colour(0, 0, 0);
	//Am Thepphithak Seekaew

	Point2D position;

	int snakeRadius = 10;
	void DrawSnake();


};
