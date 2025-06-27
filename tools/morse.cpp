//
// Created by HTaamas on 6/18/2025.
//
#include <iostream>
#include <string>
#include <map>

#include "../header.h"

std::map<char, std::string> morse = {
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."},

    // Special characters
    {' ', " "},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
    {'0', "-----"},
    {'.', ".-.-.-"},
    {',', "--..--"},
    {'?', "..--.."},
    {'\'', ".----."},
    {'!', "-.-.--"},
    {'/', "-..-."},
    {'(', "-.--."},
    {')', "-.--.-"},
    {'&', ".-..."},
    {':', "---..."},
    {';', "-.-.-."},
    {'=', "-...-"},
    {'+', ".-.-."},
    {'-', "-....-"},
    {'_', "..--.-"},
    {'\"', ".-..-."},
    {'$', "...-..-"},
    {'@', ".--.-."}
};

std::map<std::string, char> reverse_morse;

void buildReverseMapMorse() {
    for (const auto& [ch, code] : morse) {
        reverse_morse[code] = ch;
    }
}

int toMorse() {
    std::cout << "To Morse" << std::endl;
    std::string input;
    std::string result;

    std::cout << "Type text: ";
    std::getline(std::cin, input);

    for (char& c : input) {
        c = tolower(c);
    }

    for (int i = 0; i < input.length(); i++) {
        if (morse.contains(input[i])) {
            result += morse[input[i]] + " ";
        } else {
            result += " ? ";
        }
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}

int fromMorse() {
    std::cout << "From Morse" << std::endl;
    std::string input;
    std::string result;
    std::string currentChar;
    int spaceCount = 0;

    std::cout << "Type Morse code: ";
    std::getline(std::cin, input);

    buildReverseMapMorse();

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];

        if (c != ' ') {
            currentChar += c;
            spaceCount = 0;
        } else {
            spaceCount++;

            if (!currentChar.empty()) {
                auto it = reverse_morse.find(currentChar);
                if (it != reverse_morse.end()) {
                    result += it->second;
                } else {
                    result += '?';
                }
                currentChar.clear();
            }

            if (spaceCount == 3) {
                result += ' ';
            }
        }
    }

    if (!currentChar.empty()) {
        auto it = reverse_morse.find(currentChar);
        if (it != reverse_morse.end()) {
            result += it->second;
        } else {
            result += '?';
        }
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}