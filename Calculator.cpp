//
// Created by sarah on 8/10/22.
//
#include <iostream>
#include "Calculator.h"



void Calculator::create_numbers() {
    int button_count = 0;
    for (auto button : button_numbers)
    {
        NumberButton temp(28 + (button_count % 3 * (65 + 28)),
                    200 + 75 * (button_count / 3),
                    button);
        num_buttons.push_back(temp);
        ++button_count;
    }
}

void Calculator::create_operators() {
    int button_count = 0;
    for (auto button : button_operators)
    {
        OperatorButton temp (400 - 28 - 65, 200 + 75 * (button_count), button);
        op_buttons.push_back(temp);
        ++button_count;
    }
}

void Calculator::draw_buttons() {
    for (auto button : num_buttons)
    {
        button.draw();
    }

    for (auto button : op_buttons)
    {
        button.draw();
    }
    equal.draw();
    DrawText( number_string.c_str(), 400 - MeasureText(number_string.c_str(), 30), 0, 30, WHITE);
}

void Calculator::check_input() {
    for (auto button : num_buttons)
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(),button.get_rect()))
        {
            button.click(number_string);
        }
    }

    for (auto button : op_buttons)
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(),button.get_rect()))
        {
            button.click(number_string);
        }
    }

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(),equal.get_rect()))
    {
        equal.click(number_string);
    }
}