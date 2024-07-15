#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "globals.h"
#include <sstream>

class Background : public GameObjects
{
public:
	Background();
	~Background();

	virtual void Update();
	virtual void Render();

private:
};

#endif