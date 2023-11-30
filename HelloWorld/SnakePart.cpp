#include "Game.h"
#include "SnakePart.h"
#include <random>

//drawing the snake
void SnakePart::DrawSnake()//Thepphithak Am Seekaew 
{ 
	Play::DrawCircle(position, snakeRadius, color);
	
}


SnakePart::SnakePart()
{

	// vector array of random colors
	std::vector <Play::Colour> colours = { Play::cCyan, Play::cBlue, Play::cGrey, Play::cGreen, Play::cMagenta, Play::cWhite }; 

	//randomizing the color in the vector array.
	std::random_device RandomColour;
	std::mt19937 gen(RandomColour());
	std::uniform_int_distribution <std::size_t> distribution(0, colours.size() - 1);

	std::size_t random_index = distribution(gen);
	color = colours[random_index]; 
	position = Point2D(-10,-10);
}
