#define PLAY_IMPLEMENTATION
#include "Game.h"
Apple apple;
bool appleOnMap = false;
int frameCounter;
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
}


