#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
public:
    Subject(){}
    virtual ~Subject(){}
    virtual void AddObserver(Observer *) = 0;
    virtual void RemoveObserver(Observer *) = 0;
    virtual void NotifyObserver() = 0;
};

#endif