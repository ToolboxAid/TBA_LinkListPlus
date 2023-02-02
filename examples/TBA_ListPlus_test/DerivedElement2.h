#ifndef DerivedElement2_h
#define DerivedElement2_h

#include "Arduino.h"
#include "VirtualBase.h"

//#include "C:/Users/davidq/Documents/Arduino/libraries/TBA_Macros/src/TBA_Macros.h"
#include "../../TBA_Macros/src/TBA_Macros.h"
//#include "TBA_Macros.h"

class DerivedElement2 : public VirtualBase
{

private:

protected:

public:

    void debugSerial(std::string debugLocation)
    {
        Serial.print  (" <");
        Serial.print  (__FILENAME__);
        Serial.print  ("> ");     

        VirtualBase::debugSerial(debugLocation.c_str());
    }
};

#endif
