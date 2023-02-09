
#pragma once

#ifndef ElementBase_h
#define ElementBase_h

#include "TBA_Macros.h"

class ElementBase
{
private:
    uint16_t identity; // inits to 0; max value 65535

protected:
public:
    const char *name;

    ElementBase(const char *name);
    virtual ~ElementBase();

    uint16_t getIdentity();
    const char *getName();

    void debugSerial(const char *debugLocation);
};

#endif