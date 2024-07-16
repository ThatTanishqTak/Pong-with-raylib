#include "globals.h"
#include "background.h"
#include "player.h"
#include "ball.h"
#include "opponent.h"

int main()
{
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pong");
	SetTargetFPS(35);

	Background background;
	Player player;
	Ball ball;
	Opponent opponent;

	while (!WindowShouldClose())
	{
		for (GameObjects* gameObjects : gameObject) { gameObjects->Update(); }

		BeginDrawing();
		ClearBackground(BLACK);

		for (GameObjects* gameObjects : gameObject) { gameObjects->Render(); }

		EndDrawing();
	}

	CloseWindow();

	return 0;
}