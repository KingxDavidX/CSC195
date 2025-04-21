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

	Vehicle(int year, std::string vehicleBrand)
	{
		setYear(year);
		setBrand(vehicleBrand);
	}

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	int getYear() { return year; }
	std::string getBrand() { return brand; }
	virtual eType getType() = 0;
protected:
	std::string brand;
	int year;

	void setYear(int amount) { year = amount; }
	void setBrand(std::string brandName) { brand = brandName; }
};


