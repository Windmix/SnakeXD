#include "Snake.h"
Snake::Snake() //Dennis
{ 
	snakePartAmount = 2;
	snakePointer = new SnakePart[snakePartAmount];
	snakeHead.position = Point2D(WIDTH / 2, HEIGHT / 2);
	firstSnakeBody.position = Point2D(snakeHead.position.x, snakeHead.position.y - 20);
	snakePointer[0] = snakeHead;
	snakePointer[1] = firstSnakeBody;
	direction = NORTH;
}
Snake::~Snake() //Destructor, Thepphithak Am Seekaew
{
	delete[] snakePointer;
	snakePointer = nullptr;
}
void Snake::AddPart()
{
	snakePartAmount++;
	SnakePart* newBody = new SnakePart[snakePartAmount];
	for (int i = 0; i < snakePartAmount - 1; i++)
	{
		newBody[i] = snakePointer[i];
	}
	SnakePart newPart;
	newPart.position = newBody[snakePartAmount - 1].position;
	newBody[snakePartAmount] = newPart;

	delete[] snakePointer;

	snakePointer = newBody;

	delete[] newBody;
}
void Snake::Draw() //draw snake loop
{
	for (int i = 0; i < snakePartAmount; i++)
	{
		snakePointer[i].DrawSnake();
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
	for (int i = snakePartAmount - 1; i > 0; i--)
	{
		
		snakePointer[i].position = snakePointer[i - 1].position;
	}

	if (direction == NORTH)
	{
		int newY = snakePointer[0].position.y - 20 + HEIGHT;
		snakePointer[0].position.y = newY % HEIGHT; 
	}
	if (direction == SOUTH) 
	{
		int newY = snakePointer[0].position.y + 20;
		snakePointer[0].position.y = newY % HEIGHT;
	}
	if (direction == WEST) 
	{
		int newX = snakePointer[0].position.x - 20 + WIDTH;
		snakePointer[0].position.x = newX % WIDTH;
	}
	if (direction == EAST) 
	{
		int newX = snakePointer[0].position.x + 20;
		snakePointer[0].position.x = newX % WIDTH;
	}
}
/*bool Snake::isColliding(const Apple& apple)
{

	return true;
}*/