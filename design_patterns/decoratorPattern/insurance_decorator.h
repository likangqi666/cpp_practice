#ifndef INSURANCE_DECORATOR_H
#define INSURANCE_DECORATOR_H
#include "insurance.h"

class InsuranceDecorator : public Insurance
{
protected:
    Insurance* decorator_insurance;
public:
    InsuranceDecorator(){};
    InsuranceDecorator(Insurance* insr)  : decorator_insurance(insr) {}
    virtual ~InsuranceDecorator(){};
    virtual double Reimburse(){};
}
#endif