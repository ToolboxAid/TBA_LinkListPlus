#pragma once

#ifndef ElementDerived_h
#define ElementDerived_h

#include "Arduino.h"

#include "ElementBase.h"
#include "InnerClass.h"
#include "TBA_Macros.h"

class ElementDerived : public ElementBase
{

private:
    InnerClass *innerClass; // Sample innerClass

protected:
public:
    ElementDerived(char *name, InnerClass *innerClass); // no need to add base class info here
    ~ElementDerived();

    InnerClass* getInnerClass();

    void debugSerial(std::string debugLocation);
};

/* = = = = = = = = = = = = = = = = = = = = = = = =
Header Above
Code   Below
= = = = = = = = = = = = = = = = = = = = = = = = */

ElementDerived::ElementDerived(char *name, InnerClass *innerClass) : ElementBase::ElementBase(name) // base class info required here
{
    if (innerClass == NULL)
    {
        Serial.println("What are you thinking!!!!");
        while (true)
        {
            Serial.print(".");
            delay(1000);
        }
    }

    this->innerClass = innerClass;
}

ElementDerived::~ElementDerived()
{
    delete this->innerClass;
    Serial.print("~ElementDerived()~ ");
}

InnerClass* ElementDerived::getInnerClass()
{
    return this->innerClass;
}

void ElementDerived::debugSerial(std::string debugLocation)
{
    Serial.print(F(" <"));
    Serial.print(__FILENAME__);
    Serial.print(F("> "));

    Serial.print(F(" innerClass: '"));
    Serial.print(this->innerClass->getInnerData().c_str());
    Serial.print(F("' "));

    ElementBase::debugSerial((char *)debugLocation.c_str()); //----->call base class first
}

#endif
