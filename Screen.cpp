//
// Created by sarah on 8/13/22.
//
#include "Screen.h"
#include <iostream>
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
        DrawText(number_string.substr(i * 16, 17).c_str(),
                 WIDTH - MeasureText(number_string.substr(i * 16, 17).c_str(), font_size) - GAP_WIDTH,
                 GAP_HEIGHT + font_size * (i),
                 font_size,
                 GREEN);
        i++;
    }
    DrawText(number_string.substr(number_string.size() - left_over_numbers).c_str(),
             WIDTH - MeasureText(number_string.substr(number_string.size() - left_over_numbers).c_str(), font_size) - GAP_WIDTH,
             GAP_HEIGHT + font_size * (i),
             font_size,
             GREEN);

    DrawText(evaluation_string.c_str(),
             WIDTH - MeasureText(evaluation_string.c_str(), font_size) - GAP_WIDTH,
             GAP_HEIGHT + SCREEN_SIZE - font_size,
             font_size,
             GREEN);
}

void Screen::equal_update() {
    number_string = evaluation_string;
    evaluation_string = "";
}

void Screen::clear_screen() {
    number_string = "";
    evaluation_string = "";
}