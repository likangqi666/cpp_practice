//Implementor
#ifndef TRIGGER_H
#define TRIGGER_H

class Trigger {
public:
    virtual void Start() = 0;
    virtual void Stop() = 0;
    ~Trigger();
}

#endif