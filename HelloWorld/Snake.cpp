#include "Game.h"
#include "Snake.h"

Snake::Snake() //Dennis
{ 
	snakePartAmount = 2;
	snakePointer = new SnakePart[snakePartAmount];
	newBody = nullptr;
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
	newBody = nullptr;
}
void Snake::AddPart() //Dennis
{
	snakePartAmount++;
	newBody = new SnakePart[snakePartAmount];
	for (int i = 0; i < snakePartAmount - 1; i++)
	{
		newBody[i] = snakePointer[i];
	}
	SnakePart newPart;
	newPart.position = newBody[snakePartAmount - 1].position;
	newBody[snakePartAmount - 1] = newPart;
	delete[] snakePointer;
	snakePointer = newBody;

	newBody = nullptr;

}
void Snake::Draw() //draw snake loop Thepphithak Am Seekaew
{
	for (int i = 0; i < snakePartAmount; i++)
	{
		snakePointer[i].DrawSnake();
	}
}
void Snake::HandleInput() //Dennis, feedback from Thepphithak Am Seekaew about adding WASD
{
	if (Play::KeyDown(VK_UP) or Play::KeyDown(0x57)) //0x57 is just the W button, the other 0x are  S A D in that order
	{
		direction = NORTH;
	}
	if (Play::KeyDown(VK_DOWN) or Play::KeyDown(0x53))
	{
		direction = SOUTH;
	}
	if (Play::KeyDown(VK_LEFT) or Play::KeyDown(0x41))
	{
		direction = WEST;
	}
	if (Play::KeyDown(VK_RIGHT) or Play::KeyDown(0x44))
	{
		direction = EAST;
	}
}

void Snake::Move()  //Dennis
{
	for (int i = snakePartAmount - 1; i > 0; i--)
	{

		snakePointer[i].position = snakePointer[i - 1].position; //Sets the position of each snakepart to the one before it in the list. Except the first snakepart
	}
	
	
	//Depending on which direction you are moving set the first snakeparts positon to TILESIZE which is a int variable with value 20
	if (direction == NORTH)
	{
		
		
		int newY = snakePointer[0].position.y - TILE_SIZE + HEIGHT;
		snakePointer[0].position.y = newY % HEIGHT; // % operand makes it so while you are under HEIGHT it simply returns your position but once you go beyond height the modulus
		// operand can divide newY by height and get the result 1 and returns the remainder. so lets say height =1000
		// and you are at 980, 980/1000 = 0.98 which modulus cant use, it would want 1. so it simply returns 980
		// if you go to 1020 it can do 1020/1000 = 1 and get remainder 20 which it returns setting our new position to 20 instead of going out of screen.
		// this is a way of working with screen borders
	}
	if (direction == SOUTH)
	{
		
		int newY = snakePointer[0].position.y + TILE_SIZE;
		snakePointer[0].position.y = newY % HEIGHT;
	}
	if (direction == WEST)
	{
		int newX = snakePointer[0].position.x - TILE_SIZE + WIDTH;
		snakePointer[0].position.x = newX % WIDTH;
	}
	if (direction == EAST)
	{
		int newX = snakePointer[0].position.x + TILE_SIZE;
		snakePointer[0].position.x = newX % WIDTH;
	}

}


bool Snake::isColliding(const Apple& apple)//Checks for collision between the first snakepart in the snake which is the head
{
	int xDiff = int(apple.position.x) - int(snakePointer[0].position.x);
	int yDiff = int(apple.position.y) - int(snakePointer[0].position.y);
	int radii = apple.appleRadius + snakePointer[0].snakeRadius;
	
	
	return((xDiff * xDiff) + (yDiff * yDiff) < radii * radii);
}
//Dennis and Fazil