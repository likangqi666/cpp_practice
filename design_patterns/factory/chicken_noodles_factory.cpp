#include "chicken_noodles_tactory.h"
#include "chicken_noodles.h"

Noodles* ChickenNoodlesFactory::MakeNoodles(){
    ChickenNoodles* chickenNdl = new ChickenNoodles();
    return chickenNdl;
}