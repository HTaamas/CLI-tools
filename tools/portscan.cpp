//
// Created by HTaamas on 6/28/2025.
//

#include <iostream>
#include <list>
#include <string>
#include <map>

#include "../header.h"

std::map<int, std::string> commonPorts = {
    {20, "FTP"},
    {21, "FTP"},
    {22, "SSH"},
    {23, "Telnet"},
    {25, "SMTP"},
    {53, "DNS"},
    {80, "Web server"},
    {110, "POP"},
    {123, "NTP"},
    {143, "IMAP"},
    {443, "HTTPS"},
    {631, "IPP"}
};

int portScan() {
    std::cout << "Port scanner" << std::endl;
    std::string IP;
    std::list<int> portsOpen;

    std::cout << "Type IP: ";
    std::getline(std::cin, IP);

    for (int i = 0; i < 1023; i++) {

    }

    std::cout << "Ports opened from 1-1023 on " << IP << std::endl;
    for (int i = 1; i < portsOpen.size(); i++) {
        std::cout << "[✓] " << i << std::endl;
    }

    return 0;
}