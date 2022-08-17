//
// Created by sarah on 8/11/22.
//

#include "EqualButton.h"

void EqualButton::click(Calculations &calc, Screen &screen, mode &current_mode) {
    screen.equal_update();
    calc.get_operand1() = calc.get_evaluation();
    calc.get_operand2() = 0;
    current_mode = equal;
}