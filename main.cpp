/**
 * 
 * 
 * create a vehicle class
 * license plate (string)
 * type (car, motorcycle, truck)
 * 
 * create a class for a ParkingSpot
 * Spot ID (int)
 * Spot Type (same as categories)
 * occupied Status
 * 
 * Create a class for ParkingGarage
 * garage contains multiple spots
 * should support
 * parking a vehicle
 * removing a vehicle
 * checking available spots by type
 * prevent duplicate parking of the same vehicle
 * 
 * 
 * Rules 
 * motorclyels can park in any spot
 * a car can park in car or truck spots
 * truck only i truck spots
 * Constraints
 * Efficient lookup when parking/removing vehicles
 * handle edge cases (garage full, invalid removals, etc.)
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "GarageClasses.hpp"

using namespace std; //this is for cout so i dont have to use std::cout everytime

int main()
{
    // Create a garage with 2 car spots, 2 motorcycle spots, 1 truck spot
    ParkingGarage garage(2, 2, 1);

    // Create some vehicles
    Vehicle car1("ABC123", "car");
    Vehicle car2("XYZ789", "car");
    Vehicle truck1("TRK001", "truck");
    Vehicle moto1("MTR111", "motorcycle");
    Vehicle car3("CAR999", "car"); // extra car to test garage full

    // Test parking
    cout << "\n--- Parking Vehicles ---" << endl;
    garage.ParkVehicle(car1);
    garage.ParkVehicle(car2);
    garage.ParkVehicle(truck1);
    garage.ParkVehicle(moto1);

    // Test duplicate parking
    cout << "\n--- Duplicate Test ---" << endl;
    garage.ParkVehicle(car1);

    // Test available spots
    cout << "\n--- Available Spots ---" << endl;
    cout << "Available car spots: " << garage.CheckAvailableSpots("car") << endl;
    cout << "Available truck spots: " << garage.CheckAvailableSpots("truck") << endl;
    cout << "Available motorcycle spots: " << garage.CheckAvailableSpots("motorcycle") << endl;

    // Test printing
    cout << "\n--- Garage Info ---" << endl;
    garage.PrintParkingInfo();

    // Test removal
    cout << "\n--- Removing car1 ---" << endl;
    garage.RemoveVehicle("ABC123");
    garage.PrintParkingInfo();

    // Test invalid removal
    cout << "\n--- Invalid Removal ---" << endl;
    garage.RemoveVehicle("FAKE00");

    // Test garage full
    cout << "\n--- Garage Full Test ---" << endl;
    garage.ParkVehicle(car1);
    garage.ParkVehicle(car3);

    return 0;
}
