#include "../include/ue.h"
#include <iostream>

int main() {

    UE userEquipment;

    userEquipment.powerOn();

    userEquipment.registerNetwork();

    userEquipment.sendData("Hello 5G Network!");

    return 0;
}

