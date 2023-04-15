#include "Car.h"
#include <iostream>
// Defines the constructor 
Car::Car()
{
	nbrDoors = 0;
}

// Defines the setter
void Car::setNbrDoors(int n)
{
	nbrDoors = n;
}

// Defines the getter
int Car::getNbrDoors()
{
	return nbrDoors; 
}

// Calls the original displayInfo from Vehicle and then displays additional car information
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << nbrDoors << endl;
}