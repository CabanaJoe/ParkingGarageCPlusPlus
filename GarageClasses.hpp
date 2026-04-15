#ifndef GARAGE_CLASSES_HPP // header guards here to prevent multiple inclusions of the same header file which can cause compilation errors.
#define GARAGE_CLASSES_HPP // same header guard. marks head as already included.

// precrocessors 
#include <iostream>
#include <string>
#include <vector>


using namespace std; //this is for cout so i dont have to use std::cout everytime


 // Creating a class to keep track of vehciles
 class Vehicle {

    // constructors, getters, setters, and printers will go here.
    public: // members are accessible from outside the class

    // constructors first
    Vehicle();
    Vehicle(string plate, string type);

    // getters
    // Returning a string with both of them.
    string GetLicensePlate() const;
    string GetVehicleType() const;

    // setters
    // nothing to return (void)

    void SetLicensePlate(string plate);
    void SetVehicleType(string type);

    // printers
    void PrintVehicleInfo();

    // usually going to be variables.
    // these store the internal state of an object.
    // remember an object is created from a class.
    // These are accessed and modified through public getter and setter functions.
    private: // access specifier private means cannot be accessed outside of the class.
    string LicensePlate;
    string VehicleType; // car, motorcycle, truck

 };



 // Creating a class for ParkingSpot
 class ParkingSpot{

    // constructors, getters, setters, and printers will go here.
    public: // access specifier

    // Contructors
    ParkingSpot();
    ParkingSpot(int spot_ID, string spot_type, bool spot_status);


    // getters
    int GetSpotID() const;
    string GetSpotType() const;
    bool GetSpotStatus() const;
    string GetParkedLicense() const;


    // setters
    void SetSpotID(int spot_ID);
    void SetSpotType(string spot_type);
    void SetSpotStatus(bool spot_status);
    void SetParkedLicense(string palte);


    // printers
    void PrintParkingSpotInfo() const;


    // usually going to be variables.
    private: // access specifier
    // data members
    int SpotID; // unique numerical spot identifier.
    string SpotType; // car, motorcycle, truck
    bool OccupiedStatus; // true if occupied, and false if space is available.
    string parkedLicensePlate;

 };



 // creating a class for ParkingGarage
 // work on at the end.
 /**
 * Create a class for ParkingGarage
 * garage contains multiple spots (vector)
 * should support
 * parking a vehicle
 * removing a vehicle
 * checking available spots by type
 * prevent duplicate parking of the same vehicle
  */
 // Garage manages spots, and spots handle cars.
 class ParkingGarage {

   public: // access specifier

   // Constructors
   ParkingGarage();
   ParkingGarage(int numCar, int numMotorcycle, int numTruck);

   // setters N/A


   // MISC.
  // We pass parameters by const reference to avoid unnecessary copying
  // and improve performance, especially for larger objects like Vehicle
  // and string. The const keyword ensures the data cannot be modified.
  // This supports efficient and safe object-oriented design.
   void ParkVehicle(const Vehicle& vehicle);
	void RemoveVehicle(const string& licenseplate);
   int CheckAvailableSpots(const string& type) const;


   // printers
   void PrintParkingInfo() const;

    // data members variables and what nots
    private: //access specifier
    vector <ParkingSpot> spots;
    vector <Vehicle> parkedVehicles; // tracks whats parked
 };
 #endif // end of the header guard to ensure the header file is only included once.
