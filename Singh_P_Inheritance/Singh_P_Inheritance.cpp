// Prabhlean Singh
// CIS 1202
// April 15, 2023

#include "PSPersonalLibrary.h"

// Object header files
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

void inputVehicle(Vehicle &, string); 


int main()
{
	Vehicle test1;
	Car test2;
	Truck test3;

	cout << "Vehicle Program";

	inputVehicle(test1, "Vehicle");
	test1.displayInfo();

	inputVehicle(test2, "Car");

	// Validates the answer and sets it to test2's nbrDoors variable
	test2.setNbrDoors(validateInteger("Enter the number of doors: ", 1));
	test2.displayInfo();

	cin.clear();
	cin.ignore(100, '\n');

	inputVehicle(test3, "Truck");

	// Validates the answer (towing capacity could be zero theoretically) and sets it to test3's towingCapacity variable
	test3.setTowingCapacity(validateInteger("Enter the towing capacity: ", 0));
	test3.displayInfo();

	endProgram();
}

// A function that takes an object related to or is a vehicle object, gets input and then use vehicle setters to 
// intialize the parameter, string parameter is for the name of the object (car,truck,etc)
void inputVehicle(Vehicle &v, string name)
{
	string manufacturer;

	cout << endl << endl << name << ":\n";

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	v.setManufacturer(manufacturer);

	// First car was made in 1886 and the current year is 2023
	v.setYearBuilt(validateInteger("Enter the year built: ", 1886, 2023));
	cin.clear();
	cin.ignore(100, '\n');
}