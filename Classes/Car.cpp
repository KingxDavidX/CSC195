#include "Car.h"
#include <iostream>

void Car::Read(std::ostream& ostream, std::istream& istream)
{
	Vehicle::Read(ostream, istream);
	ostream << "Enter the amount of doors: ";
	istream >> numOfDoors;

}
void Car::Write(std::ostream& ostream)
{
	Vehicle::Write(ostream);
	ostream << "Amount of doors: " << getNumOfDoors << "\n";
}

