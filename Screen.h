//
// Created by sarah on 8/13/22.
//

#ifndef CALCULATOR_SCREEN_H
#define CALCULATOR_SCREEN_H
#include <string>
#include "raylib.h"
#include "Constants.h"
#include <cmath>

using std::string;


class Screen {
private:
    const Rectangle screen_background{GAP_WIDTH,
                                      GAP_HEIGHT,
                                      (WIDTH- 2 * GAP_WIDTH) ,
                                      (SCREEN_SIZE - 2 * GAP_HEIGHT) };
    const int font_size = 30;
    string number_string;
    string evaluation_string;
public:
    void change_operator(const string &button_text);
    string &get_evaluation_string() { return evaluation_string; };
    void add_number(const string &button_text);
    void update_evaluation_string(const double &evaluation);
    void draw();
    void equal_update();
    void clear_screen();
};


#endif //CALCULATOR_SCREEN_H
