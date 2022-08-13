#include "Button.h"

void Button::draw() {
    DrawRectangleRec(rect, DARKPURPLE);
    DrawText(text.c_str(),
             x + width/2 - MeasureText(text.c_str(), 20) / 2.0,
             y + height / 2 - 20 / 2.0,
             20,
             WHITE);
}
