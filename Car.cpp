#include "Car.hpp"

InvalidAccelaretion:: InvalidAccelaretion()
:invalid_argument("speed cannot be below 0")
   {}

void Car::turnLeft()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::turnRight()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::brake()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::accelerate(int speed)
{
   if(speed<0)
   {
      throw InvalidAccelaretion();
   }

    std::cout << __FUNCTION__ << "(" << speed << ")" << std::endl;
}
