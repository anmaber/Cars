#include "PetrolCar.hpp"
#include "ElectricCar.hpp"
#include "HybridCar.hpp"

int main()
{
    ElectricCar nissan(new ElectricEngine(130, 650));
    PetrolCar opel(new PetrolEngine(120, 1800, 6));
    HybridCar toyota(new PetrolEngine(80, 1400, 5), new ElectricEngine(100, 540));

    Car* car = &opel;

    car->brake();
    car->refill();
    car->accelerate(50);
    std::cout<<std::endl;

    car = &nissan;
    car->refill();
    car->accelerate(80);
    car->turnLeft();
    std::cout<<std::endl;

    toyota.accelerate(100);
    toyota.ElectricCar::brake();
    std::cout<<std::endl;

}
