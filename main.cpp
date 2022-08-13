
#include "Calculator.h"


int main()
{
    Calculator calc;
    InitWindow(WIDTH, HEIGHT, "Calculator");
    SetWindowState(FLAG_VSYNC_HINT);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARKGRAY);
        calc.draw_screen();
        calc.check_input();
        calc.draw_buttons();
        EndDrawing();
    }

    CloseWindow();
}
