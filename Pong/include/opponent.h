#ifndef OPPONENT_H
#define OPPONENT_H

#include "globals.h"
#include "paddle.h"

class Opponent : public GameObjects
{
public:
	Opponent();
	~Opponent();

	virtual void Update();
	virtual void Render();

private:
	Paddle opponentPaddle;

	void Move(Paddle* opponentPaddle);
};

#endif