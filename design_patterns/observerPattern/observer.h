#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
    Observer(){}
    virtual ~Observer(){}
    virtual void Update(double value) = 0;
};

#endif