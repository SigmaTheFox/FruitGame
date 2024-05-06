#include <raylib.h>

#include "global.h"
#include "fg_drawlayout.h"

// Global variables
Font gameFont = {0};

int main() {
  const int Screen_W = 800;
  const int Screen_H = 1000;

  InitWindow(Screen_W, Screen_H, "Fruit Game");
  SetTargetFPS(60);

  Color backgroundColor = ColorFromHSV(.56f, .11f, 1.f);

  // Load font and set filter to bilinear
  gameFont = LoadFontEx("./assets/font/LilitaOne.ttf", 100, 0, 0);
  SetTextureFilter(gameFont.texture, TEXTURE_FILTER_BILINEAR);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(backgroundColor);

    Rectangle playArea = FG_DrawLayout();

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
