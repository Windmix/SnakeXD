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
	if (Play::KeyDown(VK_RETURN))
	{
		appleOnMap = false;
		
	}
	if(frameCounter==10) 
	{
		snake.HandleInput();
		snake.Move();
		frameCounter = 0;

	}
	if (snake.Collide(apple)) {
		snake.Grow();
		apple = Apple();
	}
	snake.Draw();
	
	frameCounter++;

}


