#ifndef BALL_H
#define BALL_H

#include "globals.h"

class Ball : public GameObjects
{
public:
	Ball();
	~Ball();

	virtual void Update();
	virtual void Render();

private:
};

#endif