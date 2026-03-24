// Here we are going to define the private and public members of the classes we created in the header file.
// This is our Source file associated with the GarageClasses header file. We will be defining the member functions of the classes here.

// precrocessors.
#include <iostream>
#include <string>
// include the header file we created for our classes.
#include "GarageClasses.hpp"



// default contructor for Vehicle class.
Vehicle::Vehicle()
{
    LicensePlate = "unkown"; // default license plate value.
    VehicleType = "unkown"; // default vehicle type value.
}

// defailt constructor for ParkingSpot class.
ParkingSpot::ParkingSpot()
{
    SpotID = 0; //default spot ID
    SpotType = "unknown"; // default Spot type
    OccupiedStatus = false; // default spot occupied status
}



// Parameterized constructors for classes.
// Parameterized constructor for vehicle class.
Vehicle::Vehicle(string plate, string type)
{
    LicensePlate = plate; // Assign the provided plate number
	VehicleType = type; // Assign the provided type
}

// Parameterized constructor for ParkingSpot class.
ParkingSpot::ParkingSpot(int spot_ID, string spot_type, bool spot_status)
{
    SpotID = spot_ID; // assigning spot id
    SpotType = spot_type; // assigning spot type
    OccupiedStatus = spot_status; // is it ocupado or no senor.
}

// The following construct has no parameters
ParkingGarage::ParkingGarage()
{

}


// Getters for classes.

// vehicle class getters.
// a public member which returns License Plate number for user.
string Vehicle::GetLicensePlate()
{
    return LicensePlate;
}

// public memeber which returns Vehicle type for user.
string Vehicle::GetVehicleType()
{
    return VehicleType;
}

// ParkingSpot class getter 
// a public member which returns spot id for user.
int ParkingSpot::GetSpotID()
{
    return SpotID;
}

// a public member which returns spot type for user.
string ParkingSpot::GetSpotType()
{
    return SpotType;
}

// a public member which returns spot occupation status for user.
bool ParkingSpot::GetSpotStatus()
{
    return OccupiedStatus;
}



// Setters for classes

// Vehicle class Setters.
// public memeber that allows user to change state of the object.
// setting license plate number.
void Vehicle::SetLicensePlate(string plate)
{
    // changing the state of the object
    LicensePlate = plate;
}

// public memeber that allows user to change state of the object.
// seeting the vehicle type. car, motorcycle, truck.
void Vehicle::SetVehicleType(string type)
{
    // changing state of the object
    VehicleType = type;
}


// setters for the ParkingSpot class.
// setting the SpotID
void ParkingSpot::SetSpotID(int spot_ID)
{
    SpotID = spot_ID;
}

// setting the spot type
void ParkingSpot::SetSpotType(string spot_type)
{
    SpotType = spot_type;
}

// setting the occupied status of the parking spot
void ParkingSpot::SetSpotStatus(bool spot_status)
{
    OccupiedStatus = spot_status;
}


// MISC for the ParkingGarage class.

void ParkingGarage::ParkVehicle(const Vehicle &vehicle)
{
}

void ParkingGarage::RemoveVehicle(const string &licenseplate)
{
}

int ParkingGarage::CheckAvailableSpots(const string &type) const
{
    return 0;
}


// Printers for all classes start here.

// Vehicle Printer public member to print Vehicle information.
void Vehicle::PrintVehicleInfo()
{
    cout << "Plate Number: " << LicensePlate << " & Vehicle Type is: " << VehicleType << endl;

}

// ParkingSpot printer, public member to print parking spot info.
void ParkingSpot::PrintParkingSpotInfo()
{
    cout << "User SpotID is: " << SpotID << ". The SpotType is: " << SpotType << ". Occupied?: " << OccupiedStatus << endl;
}

// ParkingGarage printer, public member to print parking garage info.
void ParkingGarage::PrintParkingInfo() const
{
}
