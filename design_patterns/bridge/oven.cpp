#include "oven.h"

void Oven::Open() {
    cout<<"Open oven"<<endl;
    return;
}

void Oven::Close() {
    cout<<"Close oven"<<endl;
    return;
}

void Oven::Heating() {
    this->trigger->Start();
    cout<<"Oven starts heating up"<<endl;
    return;
}