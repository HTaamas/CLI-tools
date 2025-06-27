//
// Created by HTaamas on 6/27/2025.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>

#include "../header.h"

std::map<int, std::string> numbers = {
    {0, "zero"},
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"},
    {10, "ten"},
    {11, "eleven"},
    {12, "twelve"},
    {13, "thirteen"},
    {14, "fourteen"},
    {15, "fifteen"},
    {16, "sixteen"},
    {17, "seventeen"},
    {18, "eighteen"},
    {19, "nineteen"}
};

std::map<int, std::string> tens = {
    {2, "twenty"},
    {3, "thirty"},
    {4, "forty"},
    {5, "fifty"},
    {6, "sixty"},
    {7, "seventy"},
    {8, "eighty"},
    {9, "ninety"}
};

std::map<std::string, int> reverseWords;

void buildReverseMapNumber() {
    for (const auto& [n, w] : numbers) reverseWords[w] = n;
    for (const auto& [n, w] : tens) reverseWords[w] = n * 10;
    reverseWords["hundred"] = 100;
    reverseWords["thousand"] = 1000;
}

std::string numberToWords(int num) {
    if (num == 0) return "zero";
    std::string result;

    if (num >= 1000) {
        result += numbers[num / 1000] + " thousand";
        num %= 1000;
        if (num) result += " ";
    }

    if (num >= 100) {
        result += numbers[num / 100] + " hundred";
        num %= 100;
        if (num) result += " ";
    }

    if (num >= 20) {
        result += tens[num / 10];
        num %= 10;
        if (num) result += "-" + numbers[num];
    } else if (num > 0) {
        result += numbers[num];
    }

    return result;
}

int wordsToNumber(const std::string& input) {
    std::istringstream iss(input);
    std::string token;
    int total = 0;
    int current = 0;

    while (iss >> token) {
        std::transform(token.begin(), token.end(), token.begin(), ::tolower);

        size_t dash = token.find('-');
        if (dash != std::string::npos) {
            std::string first = token.substr(0, dash);
            std::string second = token.substr(dash + 1);

            current += reverseWords[first];
            current += reverseWords[second];
        } else if (reverseWords.count(token)) {
            int val = reverseWords[token];
            if (val == 100) {
                current *= 100;
            } else if (val == 1000) {
                current *= 1000;
                total += current;
                current = 0;
            } else {
                current += val;
            }
        }
    }

    total += current;
    return total;
}

int fromNumericalToAlphabetical() {
    std::cout << "From Numerical To Alphabetical" << std::endl;
    int number;

    std::cout << "Enter a number (0-9999): ";
    std::cin >> number;
    std::cin.ignore();

    if (number < 0 || number > 9999) {
        std::cout << "Out of supported range." << std::endl;
        return 1;
    }

    std::string result = numberToWords(number);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

int fromAlphabeticalToNumerical() {
    std::cout << "From Alphabetical To Numerical" << std::endl;
    std::string input;

    std::cout << "Enter number alphabetically: ";
    std::getline(std::cin, input);

    buildReverseMapNumber();

    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    int result = wordsToNumber(input);

    std::cout << "Result: " << result << std::endl;

    return 0;
}