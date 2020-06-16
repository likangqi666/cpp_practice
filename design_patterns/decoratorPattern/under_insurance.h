#ifndef UNDER_INSURANCE_H
#define UNDER_INSURANCE_H
class UnderInsurance : public Insurance
{
public:
    UnderInsurance() {};
    UnderInsurance(double);
    ~UnderInsurance();
    void SetRatio(double);
    double Reimburse();
protected:
    double ratio;
}
#endif