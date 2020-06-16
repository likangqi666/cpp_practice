#include "life_insurance.h"

void LifeInsurance::SetBalance(double value)
{
    this->balance = value;
    return;
}

LifeInsurance::LifeInsurance(Insurance* insr) : InsuranceDecorator(insr) {}

void LifeInsurance::AddExpense(double value)
{
    value = this->decorator_insurance::Reimburse() * value;
    if (value > this->balance) {
        cout << "Exceed the limits!" << endl;
    }else{
        cout << "Reimbursed!" << endl;
    }
    return;
}