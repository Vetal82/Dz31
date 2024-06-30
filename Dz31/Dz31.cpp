#include "Garage.h"
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"


int main() {
    Garage garage;

    unique_ptr<Car> car1 = std::make_unique<Car>(10000, 180, 2015, "Red", 4, 1);
    unique_ptr<Car> car2 = std::make_unique<Car>(20000, 200, 2018, "Blue", 5, 2);
    unique_ptr<Bicycle> bicycle = std::make_unique<Bicycle>(500, 30, 2012, 18, 3);
    unique_ptr<Lorry> lorry = std::make_unique<Lorry>(50000, 100, 2010, 5000, 4);

    garage.addVehicle(std::move(car1));
    garage.addVehicle(std::move(car2));
    garage.addVehicle(std::move(bicycle));
    garage.addVehicle(std::move(lorry));

    garage.displayVehicles();
    cout << endl;

    cout << "Search by type (Car):" << endl;
    garage.searchByType("Car");
    cout << endl;

    cout << "Search by number (2):" << endl;
    garage.searchByNumber(2);
    cout << endl;

    std::cout << "Search by speed (180):" << std::endl;
    garage.searchBySpeed(180);
    cout << endl;

    cout << "Edit vehicle (Car with number 1):" << endl;
    garage.editVehicle(0, 25000, 220, 2020, "Black", 5);
    cout << endl;

    cout << "Vehicles after sorting by speed:" << endl;
    garage.sortVehiclesBySpeed();
    garage.displayVehicles();

    return 0;
}
