//Abstraction
#ifndef COOKING_MACHINE_H
#define COOKING_MACHINE_H

#include "trigger.h"

class CookingMachine {
public:
    CookingMachine(Trigger* t) {trigger = t};
    virtual void Open() = 0;
    virtual void Close() = 0;
    virtual void Heating() = 0;
    virtual ~CookingMachine(){};
protected:
    Trigger* trigger;
}
#endif