#include "concrete_subject.h"

void ConcreteSubject::AddObserver(Observer * observer)
{
    this->observer_list.insert(observer);
}

void ConcreteSubject::RemoveObserver(Observer * observer)
{
    this->observer_list.erase(observer);
}

void ConcreteSubject::NotifyObserver()
{
    for (auto i = this->observer_list.begin(); i != this->observer_list.end(); i++)
    {
        *i->Update(this->value);
    }
}

void ConcreteSubject::ChangeValue(double new_value)
{
    this->value = new_value;
}