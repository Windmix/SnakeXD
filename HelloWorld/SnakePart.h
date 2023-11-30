#pragma once
#include "Game.h"


class SnakePart //Am Thepphithak Seekaew
{

public:
	SnakePart();

	Play::Colour color = Play::Colour(0, 0, 0);

	Point2D position;

	int snakeRadius = 10;
	void DrawSnake();


};
