#define PLAY_IMPLEMENTATION
#include "Game.h"

SnakePart snakePart;
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
		snake.AddPart();
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


