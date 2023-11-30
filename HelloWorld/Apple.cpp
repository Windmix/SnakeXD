#include "Apple.h"
#include <random>

void Apple::DrawApple() //Dennis
{
	Play::DrawCircle(position, radius, Play::cRed);
	
}

Apple::Apple()
{
	std::random_device randomGenerator;
	std::mt19937 gen(randomGenerator()); 
	std::uniform_int_distribution<int> xDistribution(1, (width / 20) - 1); // Generates a number between 2 and window width divided by 20 -1 
	// to create a space for the edge by 10 pixels, in width it generates between 2 and 31 
	std::uniform_int_distribution<int> yDistribution(1, (height / 20) - 1); //Makes sure it generates it within a grid system 
	// in height it generates between 2 and 17
	int randomX = xDistribution(gen) * 20; //Generates the actual position, makes sure we get 20x20 pixel grid   
	int randomY = yDistribution(gen) * 20; //As we generate a circle with radius 10 the length of a circle is 20px 
	//By only letting circles spawn every 20 pixels we generate a grid system
	position = Point2D(randomX, randomY); 
	 //Generates a random x and y value to be used to make position for the Point2D declared in the Apple class
	radius = 10;
}
