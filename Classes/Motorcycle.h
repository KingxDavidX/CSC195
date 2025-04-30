#pragma once
#include "Vehicle.h"

class Motorcycle: public Vehicle
{
public:
	Motorcycle()
	{
		engineCC = 0;
	}

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	void Read(std::ifstream& istream) override;
	void Write(std::ofstream& ostream) override;

	eType getType() override { return eType::MOTORCYCLE; }
protected:
	int engineCC;
};
