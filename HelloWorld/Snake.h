#pragma once
#include "Game.h"

class Snake
{

public:
	Snake();
	~Snake();
	
	Heading direction;
	SnakePart* bodyPointer;
	SnakePart snakeHead;
	SnakePart firstSnakeBody; 
	int snakePartAmount;

	void AddPart();
	void HandleInput();
	void Move();
	//bool isColliding(const Apple& apple);
};
//Dennis
