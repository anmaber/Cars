#include "HybridCar.hpp"

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
    : PetrolCar(petrolEng)
    , ElectricCar(electricEng)
{}

void HybridCar:: accelerate(int speed)
{
    PetrolCar::accelerate(speed);
}

void HybridCar:: refill()
{
       std::cout << __FUNCTION__ << std::endl;
}
