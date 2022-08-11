//
// Created by sarah on 8/11/22.
//
#include "Button.h"
#ifndef CALCULATOR_OPERATORBUTTON_H
#define CALCULATOR_OPERATORBUTTON_H


class OperatorButton : public Button {
private:
public:
using Button::Button;

void click(std::string &number_str);
};



#endif //CALCULATOR_OPERATORBUTTON_H
