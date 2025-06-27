//
// Created by HTaamas on 6/17/2025.
//
#include <iostream>
#include <sstream>
#include <cstdint>

#include "../header.h"

void printIP(uint32_t ip) {
    std::cout << ((ip >> 24) & 0xFF) << "." << ((ip >> 16) & 0xFF) << "." << ((ip >> 8)  & 0xFF) << "."  << (ip & 0xFF) << std::endl;
}

int subnet() {
    std::cout << "Subnet calculator" << std::endl;
    std::string input;
    int a, b, c, d, cidr;

    std::cout << "Type ip(CIDR format): ";
    std::getline(std::cin, input);

    // AI line for parsing the ip
    sscanf(input.c_str(), "%d.%d.%d.%d/%d", &a, &b, &c, &d, &cidr);

    uint32_t ip = (a << 24) | (b << 16) | (c << 8) | d;
    uint32_t mask = cidr == 0 ? 0 : (~0U << (32 - cidr));
    uint32_t network = ip & mask;
    uint32_t broadcast = network | ~mask;

    std::cout << "Address:   "; printIP(ip);
    std::cout << "Mask:      "; printIP(mask);
    std::cout << "Network:   "; printIP(network);
    std::cout << "Broadcast: "; printIP(broadcast);

    return 0;
}