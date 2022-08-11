#include "raylib.h"
#include <string>

#ifndef CALCULATOR_BUTTON_H
#define CALCULATOR_BUTTON_H
class Button {
private:
    float x = 28;
    float y = 200;
    float width = 65;
    float height = 65;
    std::string text = "1";
    Rectangle rect {x, y, width, height}    ;

public:

    //-------------------------------------------
    // Constructors
    //___________________________________________

    Button() = default;
    Button(float x, float y, std::string &number) :
           x (x), y (y), text (number){};

    //-------------------------------------------
    // Getter Functions
    //___________________________________________

    Rectangle get_rect() const { return rect; };
    float get_x() const { return x; };
    float get_y() const { return y; };
    float get_width() const { return width; };
    float get_height() const { return height; };
    std::string get_text() const { return text; };

    //-------------------------------------------
    // Various Functions
    //___________________________________________

    void draw();

};

#endif //CALCULATOR_BUTTON_H
