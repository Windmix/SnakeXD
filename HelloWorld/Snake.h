#pragma once

#include "SnakePart.h"
#include "Apple.h"
#include "Constants.h"

#include <vector>

class Snake {
private:
	Heading heading;
	std::vector<SnakePart> body;
	Point2D prevTail;

public:
	Snake();
	~Snake();

	void Draw() const;
	void HandleInput();
	void Move();
	void Grow();
	bool Collide(const Apple& obj);
};

