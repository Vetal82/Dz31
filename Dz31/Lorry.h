#ifndef LORRY_H
#define LORRY_H

#include "Vehicle.h"

class Lorry : public Vehicle {
public:
    int loadCapacity;
    int lorryNumber; 

public:
    Lorry(int price, int maxSpeed, int year, int loadCapacity, int lorryNumber)
        : Vehicle(price, maxSpeed, year), loadCapacity(loadCapacity), lorryNumber(lorryNumber) {}

    string getType() const override { return "Lorry"; }
    void show() const override {
        cout << "Lorry - Price: " << price << ", Max Speed: " << maxSpeed << ", Year: " << year
            << ", Load Capacity: " << loadCapacity << ", Number: " << lorryNumber << endl;
    }

    int getNumber() const override { return lorryNumber; }
};

#endif // LORRY_H
