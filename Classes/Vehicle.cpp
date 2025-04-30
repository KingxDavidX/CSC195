#include "Vehicle.h"
#include <iostream>
#include <fstream>

void Vehicle::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter a brand: ";
	istream >> brand;

	ostream << "Enter a year: ";
	istream >> year;
}

void Vehicle::Write(std::ostream& ostream)
{
	ostream << "\nVehicle Information:\n";
	ostream << "------------------------\n";
	ostream << "Brand: " << brand << "\n";
	ostream << "Year: " << year << "\n";
}

void Vehicle::Read(std::ifstream& istream)
{
	istream >> brand;
	istream >> year;
}

void Vehicle::Write(std::ofstream& ostream)
{
	ostream << "Brand: " << brand << "\n";
	ostream << "Year: " << year << "\n";
}

std::istream& operator>>(std::istream& istream, Vehicle& vehicle)
{
	vehicle.Read(std::cout, istream);
	return istream;
}

std::ostream& operator<<(std::ostream& ostream, Vehicle& vehicle)
{
	vehicle.Write(ostream);
	return ostream;
}

