//
// Created by sarah on 8/11/22.
//
#include "Button.h"
#ifndef CALCULATOR_EQUALBUTTON_H
#define CALCULATOR_EQUALBUTTON_H
#include "Screen.h"
#include "Calculations.h"


class EqualButton : public Button {
private:
public:
using Button::Button;

void click(Calculations &calc, Screen &screen);
};



#endif //CALCULATOR_EQUALBUTTON_H
