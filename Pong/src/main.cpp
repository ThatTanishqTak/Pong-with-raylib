#include "globals.h"

int main()
{
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pong");
	SetTargetFPS(35);

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