

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H
#include <vector>
#include "Button.h"
#include "NumberButton.h"
#include "OperatorButton.h"
#include "EqualButton.h"
#include "Calculations.h"
#include "Screen.h"
#include "Constants.h"

enum mode{empty, first_operand, second_operand, operation,
          first_decimal, second_decimal, equal};
using std::vector;
using std::string;


class Calculator {
private:
    //-----------------------------------
    // Class Variables
    //-----------------------------------

    vector<string> button_numbers = { "7", "8", "9",
                                      "4", "5", "6",
                                      "1", "2", "3",
                                      "0"};
    vector<string> button_operators = {"/",
                                       "*",
                                       "-",
                                       "+"};
    vector<NumberButton> num_buttons = {};
    vector<OperatorButton> op_buttons = {};
    string equal_str{"="};
    EqualButton equal{28 + (28 + 65) * 2, 500 - 10 - 65, equal_str};
    Calculations calc;
    Screen calc_screen;
    // Button decimal; to be implemented
    // Button clear; to be implemented
    bool isDecimal = false;
    mode current_mode = empty;

    string number_string; // to be deleted

    //-----------------------------------
    // various functions
    //-----------------------------------

    void create_numbers();
    void create_operators();

public:
    //-----------------------------------
    // Constructors
    //___________________________________

    Calculator()
    {
        create_numbers();
        create_operators();
    };

    //-----------------------------------
    // various functions
    //-----------------------------------


    const vector<NumberButton> &get_buttons() const { return num_buttons; };
    void draw_buttons();
    void draw_screen();
    void check_input();
};


#endif //CALCULATOR_CALCULATOR_H
