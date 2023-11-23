#define PLAY_IMPLEMENTATION
#include "Game.h"

SnakePart snakePart;
SnakePart newSnakepart; 
bool appleOnMap = false;
int frameCounter;
Apple apple;
void StepFrame(float elapsedTime)
{	
	
	if (appleOnMap == false)
	{
		apple = Apple();
		appleOnMap = true;
	}
	if (appleOnMap == true)
	{
		apple.DrawApple();
	}
	if (Play::KeyDown(VK_RETURN) and frameCounter>6)
	{
		appleOnMap = false;
		frameCounter = 0;
	}
	snakePart.position = Point2D(50, 50);
	newSnakepart.position = Point2D(70, 50);
	snakePart.DrawSnake();
	newSnakepart.DrawSnake();
	frameCounter++;

}


