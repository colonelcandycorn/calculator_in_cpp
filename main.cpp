#include <iostream>
#include <string>
#include "Calculator.h"
extern const int WIDTH = 400;
extern const int HEIGHT = 500;

int main()
{
    Calculator calc;
    InitWindow(WIDTH, HEIGHT, "Calculator");
    SetWindowState(FLAG_VSYNC_HINT);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        calc.check_input();
        calc.draw_buttons();
        EndDrawing();
    }

    CloseWindow();
}
