#include "ElectricEngine.hpp"
#include <iostream>

InvalidPower:: InvalidPower()
    :invalid_argument("Power cannot be negative")
{}

ElectricEngine::ElectricEngine(int power, int batteryCapacity)
    : power_(power)
    , batteryCapacity_(batteryCapacity)
{
    std::cout << __FUNCTION__ << std::endl;
}

void ElectricEngine::setPower(int power)
{
    if (power < 0)
    {
        throw InvalidPower();
    }
    power_ = power;
    std::cout << __FUNCTION__ << std::endl;
}

int ElectricEngine:: getPower() const
{
   return power_;
}
