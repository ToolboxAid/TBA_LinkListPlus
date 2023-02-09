#pragma once

#ifndef ElementBase_cpp
#define ElementBase_cpp

#include "..\LinkListDebug.h" // You are required to create this file in every Project that uses LinkListPlus at root folder \LinkListDebug.h
//#define ElementBaseDebug

#include "ElementBase.h"

/* = = = = = = = = = = = = = = = = = = = = = = = =
ElementBase vars above
Code Below
= = = = = = = = = = = = = = = = = = = = = = = = */

ElementBase::ElementBase(const char *name)
{
    static uint16_t identityCounter = 0;
    this->identity = ++identityCounter;
    this->name = name;
}
ElementBase::~ElementBase()
{
#ifdef ElementBaseDebug
 Serial.println("~ElementBase() ");
 this->debugSerial("~ElementBase()~ ");
#endif
    //    free(this->name);
}

uint16_t ElementBase::getIdentity()
{
    return this->identity;
}

const char *ElementBase::getName()
{
    return this->name;
}

void ElementBase::debugSerial(const char *debugLocation)
{
#ifdef ElementBaseDebug    
    Serial.print(F(" <"));
    Serial.print(__FILENAME__);
    Serial.print(F("> "));

    Serial.print(F(" identity: '"));
    Serial.print(this->identity);

    Serial.print(F("' name: '"));
    Serial.print(this->getName());

    Serial.print(F("' debug Loc: '"));
    Serial.print(debugLocation);
    Serial.print(F("' "));

    Serial.println();
#endif    
}

#endif
