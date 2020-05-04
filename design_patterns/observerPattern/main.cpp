#include "concrete_subject.h"
#include "progress_bar.h"
#include "text_window.h"

int main()
{
    ConcreteSubject *pSubject = new ConcreteSubject();
    ProgressBar *pProgressBar = new ProgressBar();
    TextWindow *pTextWindow1  = new TextWindow();
    TextWindow *pTextWindow2  = new TextWindow();

    pSubject->AddObserver(pProgressBar);
    pSubject->AddObserver(pTextWindow1);
    pSubject->AddObserver(pTextWindow2);

    pSubject->ChangeValue(33.2);
    pSubject->NotifyObserver();

    pSubject->RemoveObserver(pTextWindow2);

    pSubject->ChangeValue(70.1);
    pSubject->NotifyObserver();

    delete(pSubject);
    delete(pProgressBar);
    delete(pTextWindow1);
    delete(pTextWindow2);

    return 0;
}