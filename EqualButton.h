//
// Created by sarah on 8/11/22.
//
#include "Button.h"
#ifndef CALCULATOR_EQUALBUTTON_H
#define CALCULATOR_EQUALBUTTON_H


class EqualButton : public Button {
private:
public:
using Button::Button;

void click(std::string &number_str);
};



#endif //CALCULATOR_EQUALBUTTON_H
