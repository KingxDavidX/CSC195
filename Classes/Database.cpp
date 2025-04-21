#include "Database.h"

#include <iostream>

#include "Car.h"
#include "Motorcycle.h"

void Database::Create(Vehicle::eType type)
{
	Vehicle* vehicle = nullptr;
	switch (type)
	{
	case Vehicle::eType::CAR:
		vehicle = new Car;
		break;
	case Vehicle::eType::MOTORCYCLE:
		vehicle = new Motorcycle;
		break;
	}
	vehicle->Read(std::cout, std::cin);
	vehicle->Write(std::cout);
	vehicles.push_back(vehicle);
}
void Database::Display(Vehicle::eType type)
{
	for (Vehicle* vehicle: vehicles)
	{
		if (vehicle->getType() == type)
		{
			vehicle->Write(std::cout);
		}
	}
}
void Database::Display(const std::string& name)
{
	for (Vehicle* vehicle : vehicles)
	{
		if (vehicle->getBrand() == name)
		{
			vehicle->Write(std::cout);
		}
	}
}
void Database::DisplayAll()
{
	for (Vehicle* vehicle: vehicles)
	{
		vehicle->Write(std::cout);
	}
}




