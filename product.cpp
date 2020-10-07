// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program finds the product of all natural numbers preceding the
//     number inputted by the user (a.k.a. Factorial)

#include <inttypes.h>  // Allows products larger than the Factorial of 12
#include <iostream>
#include <string>

int main() {
    // This function finds the product of all natural numbers preceding the
    //     number inputted by the user (a.k.a. Factorial)
    std::string natural_string;
    int64_t product;
    int counter;
    int natural_integer;

    // Input
    counter = 1;
    product = 1;
    std::cout << "Enter a natural number (To Find Product 1 to N): ";
    std::cin >> natural_string;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        natural_integer = std::stoi(natural_string);
        if (natural_integer <= 0) {
            std::cout << "You have not inputted a positive number, please"
                         " input a positive number!" << std::endl;
        } else {
            do {
                product = product * counter;
                counter = counter + 1;
            } while (counter <= natural_integer);
            std::cout << "The Product of all natural numbers 1 to "
            << natural_integer << " is " << product << "!" << std::endl;
        }
    } catch (std::invalid_argument) {
    std::cout << "You have not inputted an integer, please input an integer"
                 " (natural number)!" << std::endl;
    }
}
