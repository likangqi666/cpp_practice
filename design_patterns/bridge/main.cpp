#include "normal_trigger.h"
#include "timed_trigger.h"
#include "oven.h"
#include "microwave.h"

int main() {
    TimedTrigger* tTrigger = new TimedTrigger();
    Oven* timedOven = new Oven(tTrigger);
    NormalTrigger* nTrigger = new NormalTrigger();
    Oven* normalOven = new Oven(nTrigger);

    Microwave* timedMicrowave = new Microwave(tTrigger);
    Microwave* normalMicrowave = new Microwave(nTrigger);

    //Process
    normalOven->Open();
    normalOven->Heating();
    normalOven->Close();

    timedOven->Open();
    timedOven->Heating();
    timedOven->Close();

    return 0;
}