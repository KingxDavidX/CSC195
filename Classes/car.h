#pragma once
#include "Vehicle.h"

class Car: public Vehicle
{
public:
	Car(): Vehicle(0, "default")
	{
		setNumOfDoors(0);
	}

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;

	eType getType() override { return eType::CAR; }
	int getNumOfDoors() { return numOfDoors; }
protected:
	int numOfDoors;

	void setNumOfDoors(int amount) { numOfDoors = amount; }
};
