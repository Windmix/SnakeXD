#pragma once
#include "Game.h"
class Snake
{

public:
	Snake();
	~Snake();
	
	Heading direction;
	//SnakePart* snakePointer;
	int snakePartAmount=1;
	void HandleInput();

	void Move();
	//bool isColliding(const Apple& apple);
};

