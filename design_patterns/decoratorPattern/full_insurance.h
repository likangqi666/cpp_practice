#ifndef FULL_INSURANCE_H
#define FULL_INSURANCE_H
class FullInsurance : public Insurance
{
public:
    FullInsurance();
    ~FullInsurance();
    double Reimburse(double);
}
#endif