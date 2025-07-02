//
// Created by HTaamas on 6/17/2025.
//
#include <iostream>
#include <string>
#include <cmath>

#include "../header.h"

int binaryToDecimal() {
    std::cout << "Binary to Decimal" << std::endl;
    std::string binary;
    int result = 0;

    std::cout << "Type binary number: ";
    std::getline(std::cin, binary);

    for (int i = 0; i < binary.length(); i++) {
        result += static_cast<int>(pow(2, binary.length() - i - 1));
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}

int decimalToBinary() {
    std::cout << "Decimal to Binary" << std::endl;
    std::string stringDecimal;
    std::string result;

    std::cout << "Type decimal number: ";
    std::getline(std::cin, stringDecimal);

    int intDecimal = std::stoi(stringDecimal);

    while (intDecimal > 0) {
        result = std::to_string(intDecimal % 2) + result;
        intDecimal /= 2;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}