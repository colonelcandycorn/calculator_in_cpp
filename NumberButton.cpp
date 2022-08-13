//
// Created by sarah on 8/11/22.
//

#include "NumberButton.h"

void NumberButton::click(Calculations &calc, Screen &screen, mode &current_mode) {
    switch (current_mode) {
        case empty:
            current_mode = first_operand;
        case first_operand:
            calc.update_operand1(get_text());
            screen.add_number(get_text());
            break;
    }
}