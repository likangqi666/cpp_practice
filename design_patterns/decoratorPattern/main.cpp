#include "life_insurance.h"
#include "travel_insurance.h"
#include "full_insurance.h"
#include "under_insurance.h"

int main()
{
    FullInsurance *full_insurance = new FullInsurance();
    UnderInsurance *under_insurance = new UnderInsurance();
    LifeInsurance *life_insurance1 = new LifeInsurance(full_insurance);
    LifeInsurance *life_insurance2 = new LifeInsurance(under_insurance);

    life_insurance1->SetBalance(10);
    life_insurance2->SetBalance(10);

    life_insurance1->AddExpense(10);
    life_insurance2->AddExpense(10);

    return 0;
}