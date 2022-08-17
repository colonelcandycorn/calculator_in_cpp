//
// Created by sarah on 8/17/22.
//

#include "DecimalButton.h"

void DecimalButton::click(Calculations &calc, Screen &screen, mode &current_mode) {
    switch (current_mode) {
        case equal:
            calc.reset();
            screen.clear_screen();
        case empty:
            screen.add_number("0");
        case first_operand:
            screen.add_number(get_text());
            calc.turn_on_decimal();
            current_mode = first_decimal;
            break;
        case operation:
            calc.reset_decimal_and_digits();
            screen.add_number("0");
        case second_operand:
            screen.add_number(get_text());
            calc.turn_on_decimal();
            current_mode = second_decimal;
            break;
    }
}
