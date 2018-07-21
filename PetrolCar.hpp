#pragma once
#include "PetrolEngine.hpp"
#include  "Car.hpp"

class PetrolCar : public Car
{
    void refuel();
    PetrolEngine* engine_;
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar() {}
    void refill();

};

