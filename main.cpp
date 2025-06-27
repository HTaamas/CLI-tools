#include <iostream>
#include <list>
#include <string>

#include "header.h"

using namespace std;

int main() {
    const list<string> tools = {"1. Subnet calculator", "2. Binary to Decimal", "3. To Morse", "4. From Morse", "5. From Alphabetical to Numerical", "6. From Numerical to Alphabetical"};
    std::cout << "Tools:" << endl;

    for (const string& tool : tools) {
        std::cout << tool << std::endl;
    }

    std::cout << "Choice? (type in the number of it)" << endl;

    std::string choice;
    std::getline(std::cin, choice);
    switch (stoi(choice)) {
        case 1: subnet(); break;
        case 2: binaryToDecimal(); break;
        case 3: toMorse(); break;
        case 4: fromMorse(); break;
        case 5: fromAlphabeticalToNumerical(); break;
        case 6: fromNumericalToAlphabetical(); break;
        default: cout << "Invalid choice" << endl;
    }

    return 0;
}