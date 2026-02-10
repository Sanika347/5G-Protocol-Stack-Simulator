#ifndef UE_H
#define UE_H

#include "phy.h"
#include "mac.h"
#include "rlc.h"
#include "pdcp.h"
#include "rrc.h"
#include "nas.h"

class UE {
public:
    UE();

    void powerOn();
    void registerNetwork();
    void sendData(std::string data);

private:
    PHY phy;
    MAC mac;
    RLC rlc;
    PDCP pdcp;
    RRC rrc;
    NAS nas;
};

#endif
