#define PLAY_IMPLEMENTATION
#include "Game.h"

SnakePart snakePart;

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
	if (Play::KeyDown(VK_RETURN))
	{
		appleOnMap = false;
		
	}
	
	if (Play::KeyDown(VK_RIGHT) and frameCounter>5) //Will be made part of move later but was just used to test.
	{
		snakePart.position += Point2D(10,0);
		frameCounter = 0;
	}
	snakePart.DrawSnake();
	
	frameCounter++;

}


