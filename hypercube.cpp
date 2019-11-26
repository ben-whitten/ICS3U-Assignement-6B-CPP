// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which determines the area of a hypercube.

#include <iostream>
#include <cstdlib>
#include <cmath>


float Calculations(int side) {
    // this does the math
    float area;

    area = (24 * pow(side, 2));
    return area;
}

main() {
    // this function just calls other functions

    std::string sideAsString;
    int side;
    float area;

    while (true) {
        std::cout << "Input the side length of the hypercube: ";
        std::cin >> sideAsString;

        try {
            side = std::stoi(sideAsString);

            if (side >= 0) {
                // call functions
                area = Calculations(side);
                std::cout << area << "cm^2" << std::endl;
                break;
            } else {
                std::cout << "That was not a valid number."
                << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a valid number."
        << std::endl;
        }
    }
}
