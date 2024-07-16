#include "globals.h"

std::list<GameObjects*> gameObject;

const int WINDOW_WIDTH = 1080;
const int WINDOW_HEIGHT = 720;

bool isGamePaused = false;

int playerScore = 0;
int AIScore = 0;

Vector2 centre = { static_cast<float>(WINDOW_WIDTH / 2), static_cast<float>(WINDOW_HEIGHT / 2) };
Vector2 ballSpeed = { 300.0f, 300.0f };
float radius = 15.0f;