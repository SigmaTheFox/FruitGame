#include <raylib.h>

static const int SCREEN_W = 500;
static const int SCREEN_H = 700;

int main ()
{
	InitWindow(SCREEN_W, SCREEN_H, "Fruit Game");
	SetTargetFPS(60);

	Color backgroundColor = ColorFromHSV(.56f, .11f, 1.f);
	
	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(backgroundColor);
	
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
