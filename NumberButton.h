//
// Created by sarah on 8/11/22.
//

#ifndef CALCULATOR_NUMBERBUTTON_H
#define CALCULATOR_NUMBERBUTTON_H
#include "Button.h"
#include "Calculations.h"
#include "Screen.h"



class NumberButton : public Button {
private:
public:
    using Button::Button;

    void click(Calculations &calc, Screen &screen, mode &current_mode);
};


#endif //CALCULATOR_NUMBERBUTTON_H
