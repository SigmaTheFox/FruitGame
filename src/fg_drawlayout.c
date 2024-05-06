#include <raylib.h>

#include "fg_drawlayout.h"
#include "global.h"

Rectangle FG_DrawLayout() {
	const char* Title = "Fruit Game";

	Vector2 titleSize = MeasureTextEx(gameFont, Title, 50.f, .5f);
	Vector2 titlePos = { (float)GetScreenWidth() / 2 - titleSize.x / 2, 10 };
	Rectangle playArea = { 50, 200 + titleSize.y, GetScreenWidth() - 100, GetScreenHeight() - 250 - titleSize.y };

	DrawTextEx(gameFont, Title, titlePos, 50.f, .5f, BLACK);
	DrawRectangleRoundedLines(playArea, .1f, 1, 2.f, BLACK);

	return playArea;
}