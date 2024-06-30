#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    string color;
    int numberOfDoors;
    int carNumber; 

public:
    Car(int price, int maxSpeed, int year, std::string color, int numberOfDoors, int carNumber)
        : Vehicle(price, maxSpeed, year), color(color), numberOfDoors(numberOfDoors), carNumber(carNumber) {}

    string getType() const override { return "Car"; }
    void show() const override {
        cout << "Car - Price: " << price << ", Max Speed: " << maxSpeed << ", Year: " << year
            << ", Color: " << color << ", Doors: " << numberOfDoors << ", Number: " << carNumber << endl;
    }

    int getNumber() const override { return carNumber; }
};

#endif // CAR_H
