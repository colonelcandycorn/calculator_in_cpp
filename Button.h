#include "raylib.h"
#include <string>

#ifndef CALCULATOR_BUTTON_H
#define CALCULATOR_BUTTON_H
class Button {
private:
    float x = 0;
    float y = 225;
    float width = 50;
    float height = 50;
    std::string text = "1";
    Rectangle rect {x, y, width, height}    ;

public:

    //-------------------------------------------
    // Constructors
    //___________________________________________

    Button() = default;
    Button(float x, float y, float width, float height, std::string &number) :
           x (x), y (y), width (width), height (height), text (number){};

    //-------------------------------------------
    // Getter Functions
    //___________________________________________

    Rectangle get_rect() const { return rect; };
    float get_x() const { return x; };
    float get_y() const { return y; };
    float get_width() const { return width; };
    float get_height() const { return height; };

    //-------------------------------------------
    // Various Functions
    //___________________________________________

    void draw();

};

#endif //CALCULATOR_BUTTON_H
