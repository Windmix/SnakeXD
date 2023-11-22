#define PLAY_IMPLEMENTATION
#include "Game.h"
Apple apple;
SnakePart snakePart;
bool appleOnMap = false;
int frameCounter;
bool SnakeOnMap = false;
void StepFrame(float elapsedTime)
{	
	
	if (appleOnMap == true)
	{
		apple.DrawApple();
	}
	if (appleOnMap == false)
	{
		apple.RandomizePosition();
		apple.DrawApple();
		appleOnMap = apple.appleOnMap;
	}
	if (Play::KeyDown(VK_RETURN) and frameCounter>6)
	{
		appleOnMap = false;
		frameCounter = 0;
	}
	frameCounter++;

	if (SnakeOnMap == false)
	{
		snakePart.DrawSnake();
	}
	
}


