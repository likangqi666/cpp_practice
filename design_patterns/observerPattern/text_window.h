#ifndef TEXT_WINDOW_H
#define TEXT_WINDOW_H

#include "subject.h"
#include "observer.h"
#include <iostream>
#include <string>

using namespace std;

class TextWindow : public Observer
{
public :
    TextWindow() { value = 0.0; }
    ~TextWindow();
    void Update(double);
};

#endif 