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

using namespace std; //this is for cout so i dont have to use std::cout everytime


