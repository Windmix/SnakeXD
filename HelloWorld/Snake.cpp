#include "Snake.h"

Snake::Snake() {
	heading = NORTH;
	body.push_back(SnakePart());
}

Snake::~Snake() {}

void Snake::Draw() const {
	for (const auto& item : body) {
		Play::DrawCircle(item.position, item.radius, item.GetColor());
	}
}

void Snake::HandleInput() {
	if (Play::KeyDown(VK_UP) && heading != SOUTH) {
		heading = NORTH;
	}
	if (Play::KeyDown(VK_DOWN) && heading != NORTH) {
		heading = SOUTH;
	}
	if (Play::KeyDown(VK_LEFT) && heading != EAST) {
		heading = WEST;
	}
	if (Play::KeyDown(VK_RIGHT) && heading != WEST) {
		heading = EAST;
	}
}

void Snake::Move() {
	for (std::size_t i = body.size() - 1; i > 0; --i) {
		body[i].position = body[i - 1].position;
	}
	
	prevTail = body.back().position;

	switch (heading) {
	case NORTH:
		body[0].position.y -= 2 * body[0].radius;
		break;
	case SOUTH:
		body[0].position.y += 2 * body[0].radius;
		break;
	case WEST:
		body[0].position.x -= 2 * body[0].radius;
		break;
	case EAST:
		body[0].position.x += 2 * body[0].radius;
		break;
	}
}

void Snake::Grow() {
	body.push_back(SnakePart());
	body.back().position = prevTail;
}

bool Snake::Collide(const Apple& obj) {
	return body[0].position == obj.position;
}