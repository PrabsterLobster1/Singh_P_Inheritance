#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;


// Constructs the vehicle object with the variables set to empty or zero 
Vehicle::Vehicle()
{
	manufacturer = ""; 
	yearBuilt = 0; 
}

// Defines the setters 

void Vehicle::setManufacturer(string m)
{
	manufacturer = m;
}

void Vehicle::setYearBuilt(int y)
{
	yearBuilt = y;
}

// Defines the getters

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int  Vehicle::getYearBuilt()
{
	return yearBuilt;
}


// Displays the vehicle info
void Vehicle::displayInfo()
{
	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}
