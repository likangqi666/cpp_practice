#ifndef NOODLES_MENU_H
#define NOODLES_MENU_H

#include "noodles_factory.h"
#include "noodles.h"
class NoodlesMenu {
public:
    NoodlesMenu(){};
    NoodlesMenu(NoodlesFactory* val) {ndlFac = val};
    ~NoodlesMenu(){};
    void MakeOne() = 0;
    void MakeTwo() = 0;
    void MakeThere() = 0;
protected:
    NoodlesFactory* ndlFac;
};
#endif