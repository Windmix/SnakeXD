#define PLAY_IMPLEMENTATION
#include "Game.h"


Snake snake; 
bool appleOnMap = false;
int frameCounter;
Apple apple;
void StepFrame(float elapsedTime)  //Dennis
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
	if (Play::KeyDown(VK_RETURN) and frameCounter>5)
	{
		appleOnMap = false;
		
	}
	snake.HandleInput();
	if(frameCounter>5) 
	{
		snake.Move();
		frameCounter = 0;

	}
	snake.Draw();
	
	frameCounter++;

}


