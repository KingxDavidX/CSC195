#include "Database.h"

#include <iostream>
#include <fstream>

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
	std::cin >> *vehicle;
	std::cout << *vehicle;
	vehicles.push_back(vehicle);
}
void Database::Display(Vehicle::eType type)
{
	for (Vehicle* vehicle: vehicles)
	{
		if (vehicle->getType() == type)
		{
			std::cout << *vehicle;
		}
	}
}
void Database::Display(const std::string& name)
{
	for (Vehicle* vehicle : vehicles)
	{
		if (vehicle->getBrand() == name)
		{
			std::cout << *vehicle;
		}
	}
}
void Database::DisplayAll()
{
	for (Vehicle* vehicle: vehicles)
	{
		std::cout << *vehicle;
	}
}

void Database::Load(const std::string& filename)
{
	std::ifstream input(filename);
	if (input.is_open())
	{
		vehicles.clear();
			while (!input.eof())
			{
				int type;
				input >> type;
				Vehicle* vehicle = Create(static_cast<Vehicle::eType>(type));
				vehicle->Read(input);
				vehicles.push_back(vehicle);
				
			}
	}
}

void Database::Save(const std::string& filename)
{
	
}

