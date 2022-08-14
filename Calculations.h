//
// Created by sarah on 8/13/22.
//
#include <string>
using std::string;
#ifndef CALCULATOR_CALCULATIONS_H
#define CALCULATOR_CALCULATIONS_H


class Calculations {
private:
    enum operations{addition, subtraction, division , multiplication};
    operations operation;
    double operand1 = 0;
    double operand2 = 0;
    double evaluation;
    int decimal_place = 0;
    int num_of_digits = 0;

public:
    double &get_operand1() { return operand1; };
    double &get_operand2() { return operand2; };
    double &get_evaluation() { return evaluation; };
    void update_operation(const string &operation_str);
    void update_operand(const string &num_str, double &operand);
    void turn_on_decimal() { ++decimal_place; };
    void evaluate();
    void add();
    void subtract();
    void divide();
    void multiply();
    void reset();
    void reset_decimal_and_digits();
    int calc_decimal_places(double num);
};


#endif //CALCULATOR_CALCULATIONS_H
