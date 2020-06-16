#ifndef INSURANCE_H
#define INSURANCE_H
class Insurance
{
public:
    Insurance(){};
    virtual ~Insurance(){};
    virtual AddExpense(double) = 0;
}
#endif