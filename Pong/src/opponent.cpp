#include "opponent.h"

Opponent::Opponent()
{
	opponentPaddle.paddleRect.x = WINDOW_WIDTH - 20;

	gameObject.push_back(this);
}

Opponent::~Opponent()
{

}

void Opponent::Update()
{
	Move(&opponentPaddle);

	if (CheckCollisionCircleRec(centre, radius, opponentPaddle.paddleRect)) { ballSpeed.x *= -1; }
}

void Opponent::Render()
{
	DrawRectanglePro(opponentPaddle.paddleRect, { 0, opponentPaddle.paddleRect.height / 2 }, 0.0f, WHITE);
}

void Opponent::Move(Paddle* opponentPaddle)
{
	if (ballSpeed.x > 0)
	{
		if (centre.y > opponentPaddle->paddleRect.y) { opponentPaddle->paddleRect.y += opponentPaddle->paddleSpeed * GetFrameTime(); }
		if (centre.y < opponentPaddle->paddleRect.y) { opponentPaddle->paddleRect.y -= opponentPaddle->paddleSpeed * GetFrameTime(); }
	}

	if (opponentPaddle->paddleRect.y - (opponentPaddle->paddleRect.height / 2) <= 0) { opponentPaddle->paddleRect.y = (opponentPaddle->paddleRect.height / 2); }
	if (opponentPaddle->paddleRect.y + (opponentPaddle->paddleRect.height / 2) >= WINDOW_HEIGHT) { opponentPaddle->paddleRect.y = WINDOW_HEIGHT - (opponentPaddle->paddleRect.height / 2); }
}