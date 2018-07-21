#include "ElectricCar.hpp"

ElectricCar :: ElectricCar(ElectricEngine* engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

void ElectricCar:: refill()
{
    charge();
}

void ElectricCar:: charge()
{
   std::cout << __FUNCTION__ << std::endl;
}
