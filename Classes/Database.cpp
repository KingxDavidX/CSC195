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
	vehicles.push_back(std::unique_ptr<Vehicle>{vehicle});
}
void Database::Display(Vehicle::eType type)
{
	for (auto& vehicle: vehicles)
	{
		if (vehicle->getType() == type)
		{
			std::cout << *vehicle;
		}
	}
}

std::unique_ptr<Vehicle> Database::Create(int t)
{
	Vehicle* vehicle = nullptr;
	Vehicle::eType type = static_cast<Vehicle::eType>(t);
	switch (type)
	{
	case Vehicle::eType::CAR:
		vehicle = new Car;
		break;
	case Vehicle::eType::MOTORCYCLE:
		vehicle = new Motorcycle;
		break;
	}
	return std::unique_ptr<Vehicle>{vehicle};
}

void Database::Display(const std::string& name)
{
	for (auto& vehicle : vehicles)
	{
		if (vehicle->getBrand() == name)
		{
			std::cout << *vehicle;
		}
	}
}
void Database::DisplayAll()
{
	for (auto& vehicle: vehicles)
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
				std::unique_ptr<Vehicle> vehicle = Create(type);
				vehicle->Read(input);
				vehicles.push_back(std::move(vehicle));
			}
	}
}

void Database::Save(const std::string& filename)
{
	std::ofstream output(filename);
	if (output.is_open())
	{
		for (auto& vehicle: vehicles)
		{
			static_cast<int>(vehicle->getType());
			vehicle->Write(output);
		}
	}
}

