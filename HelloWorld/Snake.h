#pragma once
#include "Game.h"
#include "Constants.h"

class Snake
{

public:
	Snake();
	~Snake();
	Heading direction; 
	int snakePartAmount;

	SnakePart* snakePointer;
	SnakePart snakeHead; 
	SnakePart firstSnakeBody;  

	void Draw();
	void AddPart();
	void HandleInput();
	void Move();
	//bool isColliding(const Apple& apple);
};
//Dennis
