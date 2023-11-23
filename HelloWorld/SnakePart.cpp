#include "snakePart.h"

SnakePart::SnakePart() // constructor
{
	RandomSetColour();
}
void SnakePart::RandomSetColour()
{
	theSnakeColour = {RandomRoll(100), RandomRoll(100),RandomRoll(100)};
}

void SnakePart::DrawSnake()
{
	Play::DrawCircle(position, SnakeRadius, theSnakeColour);
	SnakeOnMap = true;
}