#include "travel_insurance.h"

TravelInsurance::TravelInsurance(Insurance* insr) : InsuranceDecorator(insr) {}

void TravelInsurance::AddExpense(double value)
{
    value = this->decorator_insurance::Reimburse() * value;
    cout << "Reimbursed!" << endl;
}