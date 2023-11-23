#define PLAY_IMPLEMENTATION
#include "Game.h"

SnakePart snakePart;
Snake snake; 
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
	snake.HandleInput();
	if(frameCounter>5) 
	{
		snake.Move();
		frameCounter = 0;

	}
	snakePart.DrawSnake();
	
	frameCounter++;

}


