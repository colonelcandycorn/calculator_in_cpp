//
// Created by sarah on 8/11/22.
//

#include "NumberButton.h"

void NumberButton::click(Calculations &calc, Screen &screen, mode &current_mode) {
    switch (current_mode) {
        case equal:
            calc.reset();
            screen.clear_screen();
        case empty:
        case first_decimal:
            current_mode = first_operand;
        case first_operand:
            calc.update_operand(get_text(), calc.get_operand1());
            screen.add_number(get_text());
            break;
        case operation:
            calc.reset_decimal_and_digits();
        case second_decimal:
            current_mode = second_operand;
        case second_operand:
            calc.update_operand(get_text(), calc.get_operand2());
            screen.update_evaluation_string(calc.get_evaluation());
            screen.add_number(get_text());
            break;
    }
}