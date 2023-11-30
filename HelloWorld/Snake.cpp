#include "Snake.h"
Snake::Snake() //Dennis
{ 
	snakePartAmount = 2;
	bodyPointer = new SnakePart[snakePartAmount];
	snakeHead.position = Point2D(WIDTH / 2, HEIGHT / 2);
	firstSnakeBody.position = Point2D(snakeHead.position.x, snakeHead.position.y - 20);
	bodyPointer[0] = snakeHead;
	bodyPointer[1] = firstSnakeBody;
	direction = NORTH;
}
Snake::~Snake()
{
	delete[] bodyPointer;
}
void Snake::AddPart()
{
	snakePartAmount++; 
	SnakePart* newBody = new SnakePart[snakePartAmount];
	for (int i = 0; i < snakePartAmount - 1; i++)
	{
		newBody[i] = bodyPointer[i];
	}
	SnakePart newPart;
	newPart.position = newBody[snakePartAmount - 1].position;
	newBody[snakePartAmount] = newPart; 

	delete[] bodyPointer;

	bodyPointer = newBody;

	delete[] newBody;
	
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
void Snake::HandleInput() //Dennis
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
void Snake::Move() //Dennis
{
	if (direction == NORTH)
	{
		for (int i = snakePartAmount - 1; i > 0; i--)
		{
			bodyPointer[i].position = bodyPointer[i - 1].position;
		}
		bodyPointer[0].position = bodyPointer[0].position + Point2D(0, -20);
	}
	if (direction == SOUTH) 
	{
		for (int i = snakePartAmount - 1; i > 0; i--)
		{
			bodyPointer[i].position = bodyPointer[i - 1].position;
		}
		bodyPointer[0].position = bodyPointer[0].position + Point2D(0, 20);
	}
	if (direction == WEST) 
	{
		for (int i = snakePartAmount - 1; i > 0; i--)
		{
			bodyPointer[i].position = bodyPointer[i - 1].position;
		}
		bodyPointer[0].position = bodyPointer[0].position + Point2D(0, -20);
	}
	if (direction == EAST) 
	{
		for (int i = snakePartAmount - 1; i > 0; i--)
		{
			bodyPointer[i].position = bodyPointer[i - 1].position;
		}
		bodyPointer[0].position = bodyPointer[0].position + Point2D(0, 20);
	}
}
/*bool Snake::isColliding(const Apple& apple)
{

	return true;
}*/