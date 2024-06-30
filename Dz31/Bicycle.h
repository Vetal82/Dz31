#ifndef BICYCLE_H
#define BICYCLE_H

#include "Vehicle.h"

class Bicycle : public Vehicle {
public:
    int gearCount;
    int bicycleNumber; 

public:
    Bicycle(int price, int maxSpeed, int year, int gearCount, int bicycleNumber)
        : Vehicle(price, maxSpeed, year), gearCount(gearCount), bicycleNumber(bicycleNumber) {}

    string getType() const override { return "Bicycle"; }
    void show() const override {
        cout << "Bicycle - Price: " << price << ", Max Speed: " << maxSpeed << ", Year: " << year
            << ", Gears: " << gearCount << ", Number: " << bicycleNumber << endl;
    }

    int getNumber() const override { return bicycleNumber; }
};

#endif // BICYCLE_H
