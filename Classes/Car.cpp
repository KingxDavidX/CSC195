#include "Car.h"
#include <iostream>
#include <fstream>

void Car::Read(std::ostream& ostream, std::istream& istream)
{
	Vehicle::Read(ostream, istream);
	ostream << "Enter the amount of doors: ";
	istream >> numOfDoors;

}
void Car::Write(std::ostream& ostream)
{
	Vehicle::Write(ostream);
	ostream << "Amount of doors: " << numOfDoors << "\n";
}
void Car::Read(std::ifstream& istream)
{
	Vehicle::Read(istream);
	istream >> numOfDoors;
}

void Car::Write(std::ofstream& ostream)
{
	Vehicle::Write(ostream);
	ostream << numOfDoors << std::endl;
}


