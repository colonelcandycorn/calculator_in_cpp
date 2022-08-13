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

void Calculations::update_operand(const std::string &num_str, double &operand) {
    double temp_num;
    if (decimal_place) {
        temp_num = stod(num_str);
        temp_num /= pow(10, decimal_place);
        operand += temp_num;
        ++num_of_digits;
        ++decimal_place;
    } else {
        temp_num = stod(num_str);
        operand *= 10;
        operand += temp_num;
        ++num_of_digits;
    }

    if (operand2 > 0)
        evaluate();
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
    operand1 = evaluation;
    operand2 = 0;
    reset_decimal_and_digits();
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

void Calculations::reset() {
    operand1 = 0;
    operand2 = 0;
    reset_decimal_and_digits();
}

void Calculations::reset_decimal_and_digits() {
    decimal_place = 0;
    num_of_digits = 0;
}