#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H


#include "subject.h"
#include "observer.h"
#include <set>
using namespace std;

class ConcreteSubject : public Subject
{
public :
    ConcreteSubject() { value = 0.0; }
    ~ConcreteSubject();
    void AddObserver(Observer *);
    void RemoveObserver(Observer *);
    void NotifyObserver();
    void ChangeValue(double);
private :
    set<Observer *> observer_list;
    double value;
};

#endif 