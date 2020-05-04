#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

#include "subject.h"
#include "observer.h"
#include <iostream>

using namespace std;

class ProgressBar : public Observer
{
public :
    ProgressBar() { value = 0.0; }
    ~ProgressBar();
    void Update(double);
};

#endif 