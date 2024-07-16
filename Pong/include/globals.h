#ifndef GLOBALS_H
#define GLOBALS_H

#include "gameobjects.h"
#include "raylib.h"
#include <list>

extern std::list<GameObjects*> gameObject;

extern const int WINDOW_WIDTH;
extern const int WINDOW_HEIGHT;

extern bool isGamePaused;

extern int playerScore;
extern int AIScore;

extern Vector2 centre;
extern Vector2 ballSpeed;
extern float radius;

#endif