#ifndef PADDLE_H
#define PADDLE_H

#include "globals.h"

struct Paddle
{
	Rectangle paddleRect = { 0, static_cast<float>(WINDOW_HEIGHT / 2), 10, 100 };
	float paddleSpeed = 350.0f;
};

#endif