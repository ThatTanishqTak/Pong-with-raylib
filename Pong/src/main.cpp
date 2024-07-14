#include "raylib.h"

int main()
{
	InitWindow(1080, 720, "Pong");
	SetTargetFPS(35);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}