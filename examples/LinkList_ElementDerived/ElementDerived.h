#pragma once

#ifndef ElementDerived_h
#define ElementDerived_h

#include "Arduino.h"
#include "ElementBase.h"
#include "TBA_Macros.h"

class ElementDerived : public ElementBase
{

private:
    std::string moreData; // Sample field

protected:
public:
    ElementDerived(const char *name, std::string moreData); // no need to add base class info here
    ~ElementDerived();

    void setMoreData(std::string moreData);
    std::string getMoreData();

    void debugSerial(std::string debugLocation);
};

/* = = = = = = = = = = = = = = = = = = = = = = = =
Header Above
Code   Below
= = = = = = = = = = = = = = = = = = = = = = = = */

ElementDerived::ElementDerived(const char *name, std::string moreData) : ElementBase::ElementBase(name) // base class info required here
{
    if (moreData.empty())
    {
        moreData = "What are you thinking!!!!";
    }

    this->moreData = moreData;
}

ElementDerived::~ElementDerived()
{
    Serial.print("~ElementDerived()~");
}

void ElementDerived::setMoreData(std::string moreData)
{
    this->moreData = moreData;
}
std::string ElementDerived::getMoreData()
{
    return this->moreData;
}

void ElementDerived::debugSerial(std::string debugLocation)
{
    Serial.print(F(" <"));
    Serial.print(__FILENAME__);
    Serial.print(F("> "));

    Serial.print(F(" moreData: '"));
    Serial.print(this->moreData.c_str());
    Serial.print(F("' "));

    ElementBase::debugSerial((const char *)debugLocation.c_str()); //----->call base class first
}

#endif
