#ifndef NOODLES_FACTORY_H
#define NOODLES_FACTORY_H

#include "noodles.h"

class NoodlesFactory {
public:
    virtual NoodlesFactory(){};
    virtual ~NoodlesFactory(){};
    virtual Noodles* MakeNoodles () = 0;
};

#endif