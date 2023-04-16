#include "Truck.h"
#include <iostream>

// Defines the constructor 
Truck::Truck()
{
	towingCapacity = 0;
}

// Defines the setter
void Truck::setTowingCapacity(int t)
{
	towingCapacity = t;
}

// Defines the getter
int Truck::getTowingCapacity()
{
	return towingCapacity;
}

// Calls the original displayInfo from Vehicle and then displays additional truck information
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}