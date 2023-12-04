#define PLAY_IMPLEMENTATION
#include "Game.h"


Snake snake; 
bool appleOnMap = false;
int frameCounter;
Apple* apple = new Apple; // Thepphithak "Am"
void StepFrame(float elapsedTime)  //Dennis
{	

	if (appleOnMap == false)// if apple isnt on map, make call apple constructor which randomizes location again.
	{
		delete apple;
		apple = new Apple;  // Thepphithak "Am"

		appleOnMap = true;
	}
	if (appleOnMap == true)
	{
		apple->DrawApple();
	}
	snake.HandleInput(); //handle input every frame but only move once every 6. can be a bit janky but otherwise sometimes it wont listen to what you press.
	if(frameCounter>5) 
	{
		snake.Move();
		frameCounter = 0;

	}
	if (snake.isColliding(apple))
	{
		appleOnMap = false; //makes apple dissapear and gives it a new location
		snake.AddPart(); 
	}
	snake.Draw();
	
	frameCounter++; //keeps track of frames
}
void DeleteApple()  // Thepphithak "Am"
{
	delete apple;
}


