#include <string>
#ifndef VEHICLE.H
#define VEHICLE.H

using namespace std;

class Vehicle
{
private:
	string manufacturer; 
	int yearBuilt;

public:

	// Function prototypes 

	// Constructor 
	Vehicle();

	// Setters 
	void setManufacturer(string);

	void setYearBuilt(int);

	// Getters
	string getManufacturer();

	int getYearBuilt();

	void displayInfo();

};
#endif