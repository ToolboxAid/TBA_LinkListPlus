#ifndef VirtualBase_cpp
#define VirtualBase_cpp

// #include "C:/Users/davidq/Documents/Arduino/libraries/TBA_Macros/src/TBA_Macros.h"
#include "../../TBA_Macros/src/TBA_Macros.h"
// #include "TBA_Macros.h"

class VirtualBase
{
protected:
private:
    uint16_t identity;
    std::string name;
    uint16_t externalID; // max value 65535

public:
    static uint16_t identityCounter; // inits to 0;

    VirtualBase(std::string name, uint16_t externalID = 0)
    {
        this->identity = ++VirtualBase::identityCounter;
        this->name = name;
        if (externalID == 0) // if no external ID, use the identity
        {
            this->externalID = identity;
        }
        else
        {
            this->externalID = externalID;
        }
    }

    uint16_t getIdentity()
    {
        return this->identity;
    }

    std::string getName()
    {
        return this->name;
    }

    uint16_t getExternalID()
    {
        return this->externalID;
    }

    void debugSerial(std::string debugLocation)
    {
        Serial.print(F(" <"));
        Serial.print(__FILENAME__);
        Serial.print(F("> "));

        Serial.print(F(" identity: '"));
        Serial.print(this->identity);

        Serial.print(F("' name: '"));
        Serial.print(this->getName().c_str());

        Serial.print(F("' externalID: '"));
        Serial.print(this->getExternalID());

        Serial.print(F("' debug Loc: '"));
        Serial.print(debugLocation.c_str());
        Serial.print(F("' "));

        Serial.println();
    }
};

uint16_t VirtualBase::identityCounter = 0;

#endif
