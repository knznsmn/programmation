#include "raylib.h"
#include <stdlib.h>

typedef enum {TITLE, CONTENT, FIN } Slide;

int main(void) {
  const float phi = 1.618;
  const int font_size = 60;
  const int screen_width = 800;
  const int screen_haute = screen_width / phi;

  InitWindow(screen_width, screen_haute, "Sunk the Cruise Ship!");
  SetTargetFPS(60);

  int i = 0;
  char *msg = "Hello, World!";
  Slide current = TITLE;

  char *letters[26];
  while (i < 26) {
    letters[i] = (char *)malloc(sizeof(char));
    letters[i][0] = 'A' + i;
    letters[i][1] = '\0';
    i++;
  }
  i = 0;

  while (!WindowShouldClose()) {

    switch (current) {
    case TITLE:
      if (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_SPACE) || IsGestureDetected(GESTURE_TAP)) {
        current = CONTENT;
      }
      break;
    case CONTENT:
      if (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_SPACE) || IsGestureDetected(GESTURE_TAP)) {
        i++;
        if (letters[i] == NULL) {
          current = FIN;
        }
      }
      break;
    case FIN:
      if (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_SPACE) || IsGestureDetected(GESTURE_TAP)) {
        i = 0;
        msg = "Hello again, world!";
        current = TITLE;
      }
    default:
      break;
    }

    BeginDrawing();
      ClearBackground(RAYWHITE);

      switch (current)
      {
      case TITLE:
        DrawText(msg, (screen_width - MeasureText(msg, font_size)) / 2, screen_haute / 2, font_size, BLACK);
        break;
      case CONTENT:
        DrawRectangle(0, 0, screen_width, screen_haute, BEIGE);
        DrawText(letters[i], (screen_width - MeasureText(letters[i], font_size * phi)) / 2, (screen_haute - font_size * phi) / 2, font_size * phi, BLACK);
        break;
      case FIN:
        msg = "Goodbye, World!";
        DrawRectangle(0, 0, screen_width, screen_haute, GRAY);
        DrawText(msg, (screen_width - MeasureText(msg, font_size)) / 2, screen_haute / 2, font_size, RAYWHITE);
        break;
      default:
        break;
      }
    EndDrawing();
  }
  CloseWindow();
  return 0;
}