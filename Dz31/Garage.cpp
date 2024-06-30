#include "Garage.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"

Garage::Garage() {}

void Garage::addVehicle(std::unique_ptr<Vehicle> vehicle) {
    vehicles.push_back(std::move(vehicle));
}

void Garage::removeVehicle(int number) {
    if (number >= 0 && number < vehicles.size()) {
        vehicles.erase(vehicles.begin() + number);
    }
}

void Garage::searchByType(const std::string& type) const {
    for (const auto& vehicle : vehicles) {
        if (vehicle->getType() == type) {
            vehicle->show();
        }
    }
}

void Garage::searchByNumber(int number) const {
    for (const auto& vehicle : vehicles) {
        if (vehicle->getNumber() == number) {
            vehicle->show();
        }
    }
}

void Garage::searchBySpeed(int speed) const {
    for (const auto& vehicle : vehicles) {
        if (vehicle->getMaxSpeed() == speed) {
            vehicle->show();
        }
    }
}

void Garage::editVehicle(int number, int newPrice, int newMaxSpeed, int newYear, const std::string& newColor, int newDoors, int newGears, int newCapacity) {
    if (number >= 0 && number < vehicles.size()) {
        if (auto* car = dynamic_cast<Car*>(vehicles[number].get())) {
            if (!newColor.empty()) car->color = newColor;
            if (newDoors != 0) car->numberOfDoors = newDoors;
        }
        else if (auto* bicycle = dynamic_cast<Bicycle*>(vehicles[number].get())) {
            if (newGears != 0) bicycle->gearCount = newGears;
        }
        else if (auto* lorry = dynamic_cast<Lorry*>(vehicles[number].get())) {
            if (newCapacity != 0) lorry->loadCapacity = newCapacity;
        }

        vehicles[number]->show();
    }
}

void Garage::sortVehiclesBySpeed() {
    sort(vehicles.begin(), vehicles.end(), [](const unique_ptr<Vehicle>& a, const unique_ptr<Vehicle>& b) {
        return a->getMaxSpeed() < b->getMaxSpeed();
        });
}

void Garage::displayVehicles() const {
    for (const auto& vehicle : vehicles) {
        vehicle->show();
    }
}
