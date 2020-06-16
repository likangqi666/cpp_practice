#ifndef TRAVEL_INSURANCE_H
#define TRAVEL_INSURANCE_H
class TravelInsurance : public InsuranceDecorator
{
public:
    TravelInsurance() {compensation = 100.0};
    TravelInsurance(Insurance*);
    ~TravelInsurance();
    void AddExpense();
}
#endif