#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int price;
    int maxSpeed;
    int year;

public:
    Vehicle(int price, int maxSpeed, int year)
        : price(price), maxSpeed(maxSpeed), year(year) {}

    virtual ~Vehicle() {}

    virtual string getType() const = 0;
    virtual void show() const = 0;
    virtual int getNumber() const = 0;
    virtual int getMaxSpeed() const { return maxSpeed; }
};

#endif // VEHICLE_H
