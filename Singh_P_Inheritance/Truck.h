#ifndef TRUCK.H
#define TRUCK.H
// Vehicle class
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle
{
private:

	int towingCapacity;

public:

	// Function prototypes 

	// Constructor 
	Truck();

	// Setter
	void setTowingCapacity(int);

	// Getter
	int getTowingCapacity();

	void displayInfo();

};
#endif

