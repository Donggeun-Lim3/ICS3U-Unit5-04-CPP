// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by: Donggeun Lim
// Created on: Jan 2021
// This program calculates volume of sylinder


#include <iostream>
#include <string>
#include <cmath>


float CaculateVolume(int radius, int height) {
    // this function calculate area of triangle

    float volume;

    // process
    volume = M_PI * pow(radius, 2) * height;

    return volume;
}


main() {
    // this function gets radius and height

    std::string radius;
    std::string height;
    int integerAsRadius;
    int integerAsHeight;
    float volume;

    // input
    std::cout << "Enter the radius of triangle: ";
    std::cin >> radius;
    std::cout << "Enter the height of triangle: ";
    std::cin >> height;
    std::cout << std::endl;

    // call function
    try {
        integerAsRadius = std::stoi(radius);
        integerAsHeight = std::stoi(height);
        if (integerAsRadius > 0 && integerAsHeight > 0) {
            volume = CaculateVolume(integerAsRadius, integerAsHeight);
            std::cout << "The volume of cylinder is " << volume << " m³"
                      << std::endl;
        } else {
            std::cout << "Theses number are minus" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not an integer";
    }
}
