#include "beef_noodles_tactory.h"
#include "beef_noodles.h"

Noodles* BeefNoodlesFactory::MakeNoodles(){
    BeefNoodles* beefNdl = new BeefNoodles();
    return beefNdl;
}