#include "timed_trigger.h"

void TimedTrigger::Start() {
    for(int i = 0; i < 5; i++){
        cout<< i <<endl;
    }
    cout<< "Triggered!" <<end;
    return;
}

void TimedTrigger::Stop() {
    for(int i = 0; i < 5; i++){
        cout<< i <<endl;
    }
    cout<< "Stop" <<end;
    return;
}