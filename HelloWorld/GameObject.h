#pragma once

#include "Game.h"
#include "Constants.h"

class GameObject {
public:
	GameObject() = default;
	~GameObject() = default;

	Point2D position;
	float radius;
};

