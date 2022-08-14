//
// Created by sarah on 8/11/22.
//

#ifndef CALCULATOR_OPERATORBUTTON_H
#define CALCULATOR_OPERATORBUTTON_H
#include "Button.h"
#include "Calculations.h"
#include "Screen.h"

class OperatorButton : public Button {
private:
public:
using Button::Button;

void click(Calculations &calc, Screen &screen, mode &current_mode);
};



#endif //CALCULATOR_OPERATORBUTTON_H
