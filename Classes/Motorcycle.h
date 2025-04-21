#pragma once
#include "Vehicle.h"

class Motorcycle: public Vehicle
{
public:
	Motorcycle(): Vehicle()
	{
		engineCC = 0;
	}

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;

	eType getType() override { return eType::MOTORCYCLE; }
	int getEngineCC() { return engineCC; }
protected:
	int engineCC;
};
