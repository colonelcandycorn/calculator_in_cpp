//
// Created by sarah on 8/13/22.
//

#include "Screen.h"

void Screen::change_operator(const string &button_text) {
    number_string = number_string.substr(0, number_string.size() - 1); // delete operator
    number_string += button_text;
}

void Screen::add_number(const string &button_text) {
    number_string += button_text;
}

void Screen::update_evaluation_string(const double &evaluation) {
    evaluation_string = std::to_string(evaluation);
}

void Screen::draw() {
    DrawRectangleRec(screen_background, BLACK);

    int number_of_full_strings = number_string.size() / 17;
    int left_over_numbers = number_string.size() % 17;
    int i = 0;

    while (i < number_of_full_strings) {
        const char * temp_str = number_string.substr(i * 17, 17).c_str();
        DrawText(temp_str,
                 WIDTH - MeasureText(temp_str, font_size) - GAP_WIDTH,
                 GAP_HEIGHT * (i + 1), font_size,
                 GREEN);
        i++;
    }

    const char * numb_str = number_string.substr(number_string.size() - left_over_numbers, left_over_numbers).c_str();
    DrawText(numb_str,
             WIDTH - MeasureText(numb_str, font_size) - GAP_WIDTH,
             GAP_HEIGHT * (i + 1),
             font_size,
             GREEN);

    DrawText(evaluation_string.c_str(),
             WIDTH - MeasureText(evaluation_string.c_str(), font_size) - GAP_WIDTH,
             GAP_HEIGHT + SCREEN_SIZE - font_size,
             font_size,
             GREEN);
}