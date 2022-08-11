//
// Created by sarah on 8/11/22.
//

#include "OperatorButton.h"

void OperatorButton::click(std::string &number_str) {
    number_str += get_text();
}