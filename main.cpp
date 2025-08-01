#include <iostream>
#include <list>
#include <string>

#include "header.h"

using namespace std;

int main() {
    const list<string> tools = {"1. Subnet calculator", "2. Binary to Decimal", "3. Decimal to Binary", "4. To Morse", "5. From Morse", "6. From Alphabetical to Numerical", "7. From Numerical to Alphabetical"/*, "8. Port Scanner"*/};
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
        case 3: decimalToBinary(); break;
        case 4: toMorse(); break;
        case 5: fromMorse(); break;
        case 6: fromAlphabeticalToNumerical(); break;
        case 7: fromNumericalToAlphabetical(); break;
        // case 8: portScan(); break;
        default: cout << "Invalid choice" << endl;
    }

    return 0;
}