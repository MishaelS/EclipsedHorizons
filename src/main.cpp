// #include "raylib.h"

// int main() {
//     // Ваш код
//     InitWindow(800, 600, "Raylib Example");
//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         ClearBackground(RAYWHITE);
//         DrawText("Hello, Raylib!", 10, 10, 20, DARKGRAY);
//         EndDrawing();
//     }
//     CloseWindow();
//     return 0;
// }



#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

	std::cout << "The program is completed. Press Enter to exit..." << std::endl;
    std::cin.get();  // Ожидание нажатия Enter
    return 0;
}