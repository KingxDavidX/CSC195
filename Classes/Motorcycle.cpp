#include "Motorcycle.h"
#include <iostream>

void Motorcycle::Read(std::ostream& ostream, std::istream& istream)
{
	Vehicle::Read(ostream, istream);

	ostream << "enter CC: ";
	istream >> engineCC;
}
void Motorcycle::Write(std::ostream& ostream)
{
	Vehicle::Write(ostream);
	ostream << "Engine CC: " << engineCC << "\n";
}

void Motorcycle::Read(std::ifstream& istream)
{
	
}

void Motorcycle::Write(std::ofstream& ostream)
{
	
}

