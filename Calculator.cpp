//
// Created by sarah on 8/10/22.
//
#include <iostream>
#include "Calculator.h"

void Calculator::create_numbers() {
    int button_count = 0;
    for (auto button : button_numbers)
    {
        num_buttons.emplace_back(GAP_WIDTH + (button_count % 3 * (BUTTON_SIZE + GAP_WIDTH)),
                                 SCREEN_SIZE + (BUTTON_SIZE + GAP_HEIGHT) * (button_count / 3),
                                 button);
        ++button_count;
    }
}

void Calculator::create_operators() {
    int button_count = 0;
    for (auto button : button_operators)
    {
        op_buttons.emplace_back(WIDTH - GAP_WIDTH - BUTTON_SIZE,
                                SCREEN_SIZE + (BUTTON_SIZE + GAP_HEIGHT) * button_count,
                                button);
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
    DrawText( number_string.c_str(), WIDTH - MeasureText(number_string.c_str(), 30) - GAP_WIDTH, GAP_HEIGHT, 30, GREEN);
}

void Calculator::check_input() {
    switch (current_mode) {
        case empty:
            check_one_to_nine_input();
            break;
        case first_operand:
            check_numbers_input();
            check_operator_input();
            break;
        case operation:
            check_one_to_nine_input();
            check_operator_input();
            break;
        case second_operand:
            check_numbers_input();
            check_operator_input();
            check_equal_input();
            break;
    }
}

void Calculator::draw_screen() {
    calc_screen.draw();
}

void Calculator::check_numbers_input() {
    for (auto button : num_buttons)
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(),button.get_rect()))
        {
            // button.click(number_string);
            button.click(calc, calc_screen, current_mode);
        }
    }
}

void Calculator::check_one_to_nine_input() {
    for (auto button : num_buttons)
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
            CheckCollisionPointRec(GetMousePosition(),button.get_rect()) &&
            button.get_text() != "0"    )
        {
            // button.click(number_string);
            button.click(calc, calc_screen, current_mode);
        }
    }
}

void Calculator::check_operator_input() {
    for (auto button : op_buttons)
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(),button.get_rect()))
        {
            button.click(calc, calc_screen, current_mode);
        }
    }
}

void Calculator::check_equal_input() {
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(),equal.get_rect()))
    {
        equal.click(calc, calc_screen);
    }
}