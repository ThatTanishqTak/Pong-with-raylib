#include "ball.h"

Ball::Ball()
{
	gameObject.push_back(this);
}

Ball::~Ball()
{

}

void Ball::Update()
{
	centre.x += ballSpeed.x * GetFrameTime();
	centre.y += ballSpeed.y * GetFrameTime();

	if (centre.y + radius >= WINDOW_HEIGHT) { ballSpeed.y *= -1; }
	if (centre.y - radius <= 0) { ballSpeed.y *= -1; }
}

void Ball::Render()
{
	DrawCircle(centre.x, centre.y, radius, RED);
}