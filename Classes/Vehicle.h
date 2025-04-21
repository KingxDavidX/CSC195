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

	int getYear() { return year; }
	std::string getBrand() { return brand; }
	virtual eType getType() = 0;
protected:
	std::string brand;
	int year;
};


