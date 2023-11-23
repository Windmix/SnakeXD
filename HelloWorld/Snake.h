#pragma once
#include "Game.h"
class Snake
{
	Snake();
	~Snake();

	//SnakePart* snakePointer;
	int snakePartAmount=1;

	bool isColliding(const Apple& apple);
};

