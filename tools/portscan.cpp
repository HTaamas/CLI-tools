//
// Created by HTaamas on 6/28/2025.
//

#include <iostream>
#include <list>
#include <string>

#include "../header.h"

int portScan() {
    std::cout << "Port scanner" << std::endl;
    std::string IP;
    std::list<int> ports_open;

    std::cout << "Type IP: ";
    std::getline(std::cin, IP);



    for (int i = 1; i < ports_open.size(); i++) {
        std::cout << "[✓] " << i << std::endl;
    }

    return 0;
}