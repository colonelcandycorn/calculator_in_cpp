#include <iostream>
#include <string>
#include "raylib.h"
#include "Button.h"
#define WIDTH 400
#define HEIGHT 500

int main() {
    std::string numbers;
    Rectangle reck {WIDTH / 2.0 - 25, HEIGHT / 2.0 - 25, 50, 50};
    Vector2 reck_vec {reck.x, reck.y};
    Button number_one;
    InitWindow(WIDTH, HEIGHT, "Calculator");
    SetWindowState(FLAG_VSYNC_HINT);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangleRec(reck, RED);
        Vector2 mouse = GetMousePosition();
        if (CheckCollisionPointRec(mouse, reck))
        {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                numbers += '2';
        }
        number_one.draw();
        DrawText( numbers.c_str(), WIDTH - MeasureText(numbers.c_str(), 40), 0, 40, WHITE);
        DrawText("2",reck.x + 25 - MeasureText("2", 20) / 2, reck.y + 25 - 20 /2, 20, WHITE);
        EndDrawing();
    }

    CloseWindow();
}
