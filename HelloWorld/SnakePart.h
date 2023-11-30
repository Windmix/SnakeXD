#pragma once

#include "GameObject.h"

class SnakePart : public GameObject {
private:
	Play::Colour color=Play::Colour(0,0,0);

public:
	SnakePart(); 

	//Am Thepphithak Seekaew
	void DrawSnakeSegment();

	Play::Colour GetColor() const;
};
