#define PLAY_IMPLEMENTATION
#include "Game.h"

SnakePart snakePart;

SnakePart newSnakepart; 

bool appleOnMap = false;
int frameCounter;
bool SnakeOnMap = false;
void StepFrame(float elapsedTime)
{	
	
	if (appleOnMap == false)
	{
		
	}
	if (Play::KeyDown(VK_RETURN) and frameCounter>6)
	{
		
		
		frameCounter = 0;
	}
	snakePart.position = Point2D(50, 50);
	newSnakepart.position = Point2D(70, 50);
	snakePart.DrawSnake();
	newSnakepart.DrawSnake();
	frameCounter++;

	if (SnakeOnMap == false)
	{
		snakePart.DrawSnake();
	}
	
}


