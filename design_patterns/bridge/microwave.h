//RefinedAbstraction2
#ifndef MICROWAVE_H
#define MICROWAVE_H

#include "cooking_machine.h"

class Microwave : public CookingMachine {
public:
    Microwave(Trigger* t) : CookingMachine(t) {}
    void Open() = 0;
    void Close() = 0;
    void Heating() = 0;
    ~Microwave(){}
};
#endif