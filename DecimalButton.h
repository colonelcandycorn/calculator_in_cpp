//
// Created by sarah on 8/17/22.
//

#ifndef CALCULATOR_DECIMALBUTTON_H
#define CALCULATOR_DECIMALBUTTON_H
#include "Screen.h"
#include "Calculations.h"
#include "Button.h"


class DecimalButton : public Button {
private:
public:
    using Button::Button;

    void click(Calculations &calc, Screen &screen, mode &current_mode);
};


#endif //CALCULATOR_DECIMALBUTTON_H
