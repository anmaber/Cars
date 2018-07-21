#pragma once
#include <iostream>
#include <stdexcept>


class InvalidPower : public std::invalid_argument
{
public:
    InvalidPower();
};


class ElectricEngine
{
    int power_;             // in HP
    int batteryCapacity_;   // in Ah
public:
    ElectricEngine(int power, int batteryCapacity);

    void setPower(int power);
    int getPower() const;

};

