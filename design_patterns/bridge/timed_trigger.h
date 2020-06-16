//ConcreteImplementorB
#ifndef TIMED_TRIGGER_H
#define TIMED_TRIGGER_H

class TimedTrigger {
public:
    void Start() = 0;
    void Stop() = 0;
    ~TimedTrigger();
}

#endif