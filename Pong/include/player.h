#ifndef PLAYER_H
#define PLAYER_H

#include "globals.h"
#include "paddle.h"

class Player : public GameObjects
{
public:
	Player();
	~Player();

	virtual void Update();
	virtual void Render();

private:
	Paddle playerPaddle;

	void Move(Paddle* playerPaddle);
};

#endif