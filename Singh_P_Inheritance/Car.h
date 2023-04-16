#ifndef CAR_H
#define CAR_H
// Vehicle class
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
private:

	int nbrDoors; 

public:

	// Function prototypes 

	// Constructor 
	Car();

	// Setter
	void setNbrDoors(int);

	// Getter
	int getNbrDoors();

	void displayInfo(); 
	
};
#endif
