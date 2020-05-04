#include "progress_bar.h"

void ProgressBar::Update(double new_value)
{
    for(int i = 0; i <= new_value && i <= 100; ++i)
    {
        cout<<">>";
    }
    cout<<"\n";
}