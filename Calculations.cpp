//
// Created by sarah on 8/13/22.
//

#include "Calculations.h"
#include <cmath>

void Calculations::update_operation(const std::string &operation_str) {
    if (operation_str == "+") {
        operation = addition;
    } else if (operation_str == "-") {
        operation = subtraction;
    } else if (operation_str == "/") {
        operation = division;
    } else {
        operation = multiplication;
    }
}

void Calculations::update_operand1(const std::string &num_str) {
    double temp_num;
    if (decimal_place) {
        temp_num = stod(num_str);
        temp_num /= pow(10, decimal_place);
        operand1 += temp_num;
        ++num_of_digits;
        ++decimal_place;
    } else {
        temp_num = stod(num_str);
        operand1 *= 10;
        operand1 += temp_num;
        ++num_of_digits;
    }
}

void Calculations::update_operand2(const std::string &num_str) {
    double temp_num;
    if (decimal_place) {
        temp_num = stod(num_str);
        temp_num /= pow(10, decimal_place);
        operand2 += temp_num;
        ++num_of_digits;
        ++decimal_place;
    } else {
        temp_num = stod(num_str);
        operand2 *= 10;
        operand2 += temp_num;
        ++num_of_digits;
    }
    Calculations::evaluate();
}

void Calculations::evaluate() {
    switch (operation) {
        case addition:
            Calculations::add();
            break;
        case subtraction:
            Calculations::subtract();
            break;
        case division:
            Calculations::divide();
            break;
        case multiplication:
            Calculations::multiply();
            break;
    }
}

void Calculations::add() {
    evaluation = operand1 + operand2;
}

void Calculations::subtract() {
    evaluation = operand1 - operand2;
}

void Calculations::divide() {
    evaluation = operand1 / operand2;
}

void Calculations::multiply() {
    evaluation = operand1 * operand2;
}