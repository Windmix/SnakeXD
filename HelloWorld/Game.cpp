#define PLAY_IMPLEMENTATION
#include "Game.h"

#include "Apple.h"
#include "Snake.h"


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
	if(frameCounter==6) 
	{
		snake.Move();
		frameCounter = 0;

	}
	if (snake.Collide(apple)) {
		snake.Grow();
		appleOnMap = false;
	}
	snake.Draw();
	
	frameCounter++;

}


