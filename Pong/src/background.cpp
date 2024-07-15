#include "background.h"

Background::Background()
{
	gameObject.push_back(this);
}

Background::~Background()
{

}

void Background::Update()
{

}

void Background::Render()
{
	DrawLine(WINDOW_WIDTH / 2, 0, WINDOW_WIDTH / 2, WINDOW_HEIGHT, WHITE);
	DrawCircleLines(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, 20.0f, WHITE);

	DrawText(std::to_string(playerScore).c_str(), WINDOW_WIDTH / 4, 10, 48, RED);
	DrawText(std::to_string(AIScore).c_str(), (3 * (WINDOW_WIDTH / 4)), 10, 48, RED);
}