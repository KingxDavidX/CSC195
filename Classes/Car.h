#pragma once
#include "Vehicle.h"

class Car: public Vehicle
{
public:
	Car()
	{
		numOfDoors = 0;
	}

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	void Read(std::ifstream& istream) override;
	void Write(std::ofstream& ostream) override;

	eType getType() override { return eType::CAR; }
protected:
	int numOfDoors;
};
