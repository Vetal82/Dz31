#ifndef GARAGE_H
#define GARAGE_H

#include "Vehicle.h"
#include <vector>
#include <algorithm>


class Garage {
private:
    vector<unique_ptr<Vehicle>> vehicles;

public:
    Garage();
    void addVehicle(std::unique_ptr<Vehicle> vehicle);
    void removeVehicle(int number);
    void searchByType(const string& type) const;
    void searchByNumber(int number) const;
    void searchBySpeed(int speed) const;
    void editVehicle(int number, int newPrice, int newMaxSpeed, int newYear, const string& newColor = "", int newDoors = 0, int newGears = 0, int newCapacity = 0);
    void sortVehiclesBySpeed();
    void displayVehicles() const;
};

#endif // GARAGE_H
