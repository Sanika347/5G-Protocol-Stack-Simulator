#include "../include/phy.h"
#include <iostream>

void PHY::transmit(std::string data) {
    std::cout << "[PHY] Transmitting: " << data << std::endl;
}
