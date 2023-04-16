// Prabhlean Singh
// CIS 1202
// April 15, 2023

#include "PSPersonalLibrary.h"

// Object header files
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

void inputVehicle(Vehicle, string); 


int main()
{
	Vehicle test1;
	inputVehicle(test1, "Vehicle");
	test1.displayInfo();
}

// A function that takes an object related to or is a vehicle object, gets input and then use vehicle setters to 
// intialize the parameter, string parameter is for the name of the object (car,truck,etc)
void inputVehicle(Vehicle v, string name)
{
	string manufacturer;
	int year;

	cout << name << ":\n";

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);

	// First car was made in 1886 and the current year is 2023
	year = validateInteger("Enter the year built: ", 1886, 2023);

	v.setManufacturer(manufacturer);
	v.setYearBuilt(year);

}