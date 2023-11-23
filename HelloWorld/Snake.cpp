#include "Snake.h"
Snake::Snake()
{
	direction = NORTH;
}
Snake::~Snake()
{

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