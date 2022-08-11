#include <vector>
#include "Button.h"
#include "NumberButton.h"
#include "OperatorButton.h"
#include "EqualButton.h"
#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H
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
    Button decimal;
    Button clear;
    bool isDecimal = false;
    string mode = "empty";

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
    void check_input();
};


#endif //CALCULATOR_CALCULATOR_H
