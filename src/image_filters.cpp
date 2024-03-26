#include "image_menu.h"
#include "PPM.h"
#include "ActionData.h"
#include "MenuData.h"
#include <iostream>

// ppm operators


void plusEquals( ActionData& action_data ) {
    action_data.getInputImage1() += action_data.getInputImage2();
}  

void minusEquals( ActionData& action_data ) {
    action_data.getInputImage1() -= action_data.getInputImage2();
}

void timesEquals( ActionData& action_data ) {
    double modify = getDouble(action_data, "Factor? ");
    action_data.getInputImage1() *= modify;
}

void divideEquals( ActionData& action_data ) {
    double modify = getDouble(action_data, "Factor? ");
    action_data.getInputImage1() /= modify;
}

void plus( ActionData& action_data ) {
    action_data.getOutputImage() = action_data.getInputImage1() + action_data.getInputImage2();
}

void minus( ActionData& action_data ) {
    action_data.getOutputImage() = action_data.getInputImage1() - action_data.getInputImage2();
}

void times( ActionData& action_data ) {
    double modify = getDouble(action_data, "Factor? ");
    action_data.getOutputImage() = action_data.getInputImage1() * modify;
}

void divide( ActionData& action_data ) {
    double modify = getDouble(action_data, "Factor? ");
    action_data.getOutputImage() = action_data.getInputImage1() / modify;
}

// image filters

void grayFromRed(ActionData& action_data) {
    action_data.getInputImage1().grayFromRed(action_data.getOutputImage());
}

void grayFromGreen(ActionData& action_data) {
    action_data.getInputImage1().grayFromGreen(action_data.getOutputImage());
}

void grayFromBlue(ActionData& action_data) {
    action_data.getInputImage1().grayFromBlue(action_data.getOutputImage());
}

void grayFromLinearColorimetric(ActionData& action_data) {
    action_data.getInputImage1().grayFromLinearColorimetric(action_data.getOutputImage());
}   
