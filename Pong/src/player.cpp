#include "player.h"

Player::Player()
{
	playerPaddle.paddleRect.x = 10;

	gameObject.push_back(this);
}

Player::~Player()
{

}

void Player::Update()
{
	Move(&playerPaddle);

	if (CheckCollisionCircleRec(centre, radius, playerPaddle.paddleRect)) { ballSpeed.x *= -1; }
}

void Player::Render()
{
	DrawRectanglePro(playerPaddle.paddleRect, { 0, playerPaddle.paddleRect.height / 2 }, 0.0f, WHITE);
}

void Player::Move(Paddle* playerPaddle)
{
	if (IsKeyDown(KEY_W)) { playerPaddle->paddleRect.y -= playerPaddle->paddleSpeed * GetFrameTime(); }
	if(IsKeyDown(KEY_S)) { playerPaddle->paddleRect.y += playerPaddle->paddleSpeed * GetFrameTime(); }

	if (playerPaddle->paddleRect.y - (playerPaddle->paddleRect.height / 2) <= 0) { playerPaddle->paddleRect.y = (playerPaddle->paddleRect.height / 2); }
	if (playerPaddle->paddleRect.y + (playerPaddle->paddleRect.height / 2) >= WINDOW_HEIGHT) { playerPaddle->paddleRect.y = WINDOW_HEIGHT - (playerPaddle->paddleRect.height / 2); }
}