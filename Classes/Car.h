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

	eType getType() override { return eType::CAR; }
protected:
	int numOfDoors;
};
