#include "raylib.h"

int main() {
    // Ваш код
    InitWindow(800, 600, "Raylib Example");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib!", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}