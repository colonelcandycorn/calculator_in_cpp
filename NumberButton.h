//
// Created by sarah on 8/11/22.
//
#include "Button.h"

#ifndef CALCULATOR_NUMBERBUTTON_H
#define CALCULATOR_NUMBERBUTTON_H


class NumberButton : public Button {
private:
public:
    using Button::Button;

    void click(std::string &number_str);
};


#endif //CALCULATOR_NUMBERBUTTON_H
