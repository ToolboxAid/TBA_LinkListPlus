#pragma once

#ifndef InnerClass_h
#define InnerClass_h

#define InnerClassDebug

#include "Arduino.h"
#include "TBA_Macros.h"

class InnerClass
{
private:
    std::string innerData; // Sample field
protected:
public:
    InnerClass(std::string data);
    ~InnerClass(); // = 0; = default;

    std::string getInnerData();

    void debugSerial(std::string debugLocation);
};

/* = = = = = = = = = = = = = = = = = = = = = = = =
Header Above
Code   Below
= = = = = = = = = = = = = = = = = = = = = = = = */

InnerClass::InnerClass(std::string data)
{
    this->innerData = data;
}
InnerClass::~InnerClass() // = default;
{
    Serial.print("~InnerClass()~ ");
}

std::string InnerClass::getInnerData()
{
    return this->innerData;
}


void InnerClass::debugSerial(std::string debugLocation)
{
    Serial.print(F(" <"));
    Serial.print(__FILENAME__);
    Serial.print(F("> "));

    Serial.print(F(" innerData: '"));
    Serial.print(this->innerData.c_str());

    Serial.print(F("' "));
}

#endif