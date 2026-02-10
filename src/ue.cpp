#include "../include/ue.h"
#include <iostream>

UE::UE() {}

void UE::powerOn() {
    std::cout << "\nUE Powered ON\n";
}

void UE::registerNetwork() {
    nas.authenticate();
    rrc.setupConnection();
    std::cout << "UE Registered Successfully\n\n";
}

void UE::sendData(std::string data) {

    std::cout << "Sending Data: " << data << "\n\n";

    pdcp.encrypt(data);
    rlc.segment(data);
    mac.process(data);
    phy.transmit(data);

    std::cout << "\nData Sent Successfully\n";
}

