#pragma once
#include <string>


class Vehicle
{
public:
	Animal(int year,std::string brand)
	{
		setSpeed(0);
		setYear(year);
		setBrand(brand);
	}
	virtual void drive() = 0;
	virtual std::string displayInfo() = 0;
protected:
	std::string brand;
	int speed;
	int year;
	void setSpeed(int amount) { speed = amount; }
	void setYear(int amount) { year = amount; }
	void setBrand(std::string brandName) { brand = brandName; }
};
