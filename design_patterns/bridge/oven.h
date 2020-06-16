//RefinedAbstraction1
#ifndef OVEN_H
#define OVEN_H

#include "cooking_machine.h"

class Oven : public CookingMachine {
public:
    Oven(Trigger* t) : CookingMachine(t) {}
    void Open() = 0;
    void Close() = 0;
    void Heating() = 0;
    ~Oven(){}
}
#endif