#ifndef LIFE_INSURANCE_H
#define LIFE_INSURANCE_H
class LifeInsurance : public InsuranceDecorator
{
public:
    LifeInsurance() {balance = 100.0};
    LifeInsurance(Insurance*);
    ~LifeInsurance();
    void SetBalance(double);
    void AddExpense(double);
private:
    double balance;
}
#endif