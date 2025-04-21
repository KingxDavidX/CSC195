#pragma once
#include "Vehicle.h"

class Motorcycle: public Vehicle
{
public:
	Motorcycle(): Vehicle(0, "Default")
	{
		setEngineCC(0);
	}

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;

	eType getType() override { return eType::MOTORCYCLE; }
	int getEngineCC() { return engineCC; }
protected:
	int engineCC;

	void setEngineCC(int amount) { engineCC = amount; }
};
