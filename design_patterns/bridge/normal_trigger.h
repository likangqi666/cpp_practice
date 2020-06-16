//ConcreteImplementorA
#ifndef NORMAL_TRIGGER_H
#define NORMAL_TRIGGER_H

class NormalTrigger {
public:
    void Start() = 0;
    void Stop() = 0;
    ~NormalTrigger();
}

#endif