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
	snake.HandleInput();
	if(frameCounter>5) 
	{
		snake.Move();
		frameCounter = 0;

	}
	if (snake.isColliding(apple))
	{
		appleOnMap = false;
		snake.AddPart();
	}
	snake.Draw();
	
	frameCounter++;

}


