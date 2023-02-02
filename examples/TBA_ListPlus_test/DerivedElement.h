#ifndef DerivedElement_h
#define DerivedElement_h

#include "Arduino.h"
#include "VirtualBase.h"
//#include "C:/Users/davidq/Documents/Arduino/libraries/TBA_Macros/src/TBA_Macros.h"
#include "../../TBA_Macros/src/TBA_Macros.h"
//#include "TBA_Macros.h"

class DerivedElement : public VirtualBase
{

private:
    std::string moreData; // Sample field
    uint16_t moreID; // Sample field

protected:

public:
    DerivedElement(std::string name, uint16_t externalID = 0) : VirtualBase(name, externalID) //----->call base class // Not sure why it's required.
    {
        this->moreData = "";
        this->moreID = 0;
    }

    DerivedElement(std::string name, uint16_t externalID, std::string moreData, uint16_t moreID) : VirtualBase(name, externalID) //----->call base class
    {
        if (moreData.empty())
        {
            moreData = "";
        }

        this->moreData = moreData;
        this->moreID = moreID;
    }


    void setMoreData(const char* moreData)
    {
        Serial.println(moreData);
        this->moreData = moreData;
    }


    void debugSerial(std::string debugLocation)
    {
        Serial.print  (F(" <"));
        Serial.print  (__FILENAME__);
        Serial.print  (F("> "));
 
        Serial.print  (F(" moreData: '"));
        Serial.print  (this->moreData.c_str());
        Serial.print  (F("' moreID: '"));
        Serial.print  (this->moreID);
        Serial.print  (F("' "));

        VirtualBase::debugSerial(debugLocation.c_str()); //----->call base class first
    }
};

#endif
