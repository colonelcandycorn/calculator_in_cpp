//
// Created by sarah on 8/11/22.
//

#include "OperatorButton.h"

void OperatorButton::click(Calculations &calc, Screen &screen, mode &current_mode) {
    switch (current_mode) {
        case second_decimal:
        case second_operand:
            calc.get_operand1() = calc.get_evaluation();
            calc.get_operand2() = 0;
        case first_decimal:
        case equal:
        case first_operand:
            calc.update_operation(get_text());
            screen.add_number(get_text());
            current_mode = operation;
            break;
        case operation:
            calc.update_operation(get_text());
            screen.change_operator(get_text());
        case empty:
            break;
    }
}