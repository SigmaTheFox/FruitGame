#include <raylib.h>

#include "global.h"

// Global variables
Font gameFont = {0};

int main() {
  const int Screen_W = 500;
  const int Screen_H = 700;

  const char *Title = "Fruit Game";

  InitWindow(Screen_W, Screen_H, "Fruit Game");
  SetTargetFPS(60);

  Color backgroundColor = ColorFromHSV(.56f, .11f, 1.f);

  // Load font and set filter to bilinear
  gameFont = LoadFontEx("./assets/font/LilitaOne.ttf", 100, 0, 0);
  SetTextureFilter(gameFont.texture, TEXTURE_FILTER_BILINEAR);

  Vector2 titleSize = MeasureTextEx(gameFont, Title, 50.f, .5f);
  Vector2 titlePos = {(float)Screen_W / 2 - titleSize.x / 2, 10};

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(backgroundColor);

    DrawTextEx(gameFont, Title, titlePos, 50.f, .5f, BLACK);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
