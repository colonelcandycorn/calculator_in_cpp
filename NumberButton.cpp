//
// Created by sarah on 8/11/22.
//

#include "NumberButton.h"

void NumberButton::click(std::string &number_str) {
    number_str += get_text();
}