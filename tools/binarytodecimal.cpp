//
// Created by HTaamas on 6/17/2025.
//
#include <iostream>
#include <string>
#include <cmath>

#include "../header.h"

int binaryToDecimal() {
    std::cout << "Binary to decimal" << std::endl;
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