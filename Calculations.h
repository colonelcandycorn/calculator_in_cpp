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
    void update_operation(const string &operation_str);
    void update_operand1(const string &num_str);
    void update_operand2(const string &num_str);
    void evaluate();
    void add();
    void subtract();
    void divide();
    void multiply();
};


#endif //CALCULATOR_CALCULATIONS_H
