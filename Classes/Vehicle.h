#pragma once
#include <string>


class Vehicle
{
public:
	enum class eType
	{
		CAR,
		MOTORCYCLE
	};

	Vehicle()
	{
		year = 0;
		brand = "unassigned";
	}

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	virtual void Read(std::ifstream& istream);
	virtual void Write(std::ofstream& ostream);

	friend std::istream& operator >> (std::istream& istream, Vehicle& vehicle);
	friend std::ostream& operator << (std::ostream& ostream, Vehicle& vehicle);

	virtual eType getType() = 0;
	std::string getBrand() { return brand; }
protected:
	std::string brand;
	int year;
};


