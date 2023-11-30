#include "Snake.h"
Snake::Snake() //constructor for snake
{
	snakePointerArray = new SnakePart[snakePartAmount];
	direction = NORTH;
}
Snake::~Snake() //destructor for snake
{
	delete[] snakePointerArray;
	snakePointerArray = nullptr;
}
void Snake::Draw() //draw snake loop
{
	for (int i = 0; i < snakePartAmount; i++)
	{
		snakePointerArray[i].DrawSnake();
	}
}
void Snake::HandleInput() //Code works
{
	if (Play::KeyDown(VK_UP))
	{
		direction = NORTH;
	}
	if (Play::KeyDown(VK_DOWN))
	{
		direction = SOUTH;
	}
	if (Play::KeyDown(VK_LEFT))
	{
		direction = WEST;
	}
	if (Play::KeyDown(VK_RIGHT))
	{
		direction = EAST;
	}

}
void Snake::Move() //Code confirmed works, just need to add the snakePart pointer array etc
{
	if (direction == NORTH)
	{
		
	}
	if (direction == SOUTH) 
	{
		
	}
	if (direction == WEST) 
	{
		
	}
	if (direction == EAST) 
	{
		
	}
}
/*bool Snake::isColliding(const Apple& apple)
{

	return true;
}*/