#pragma once
#include <memory>
#include <vector>

#include "Vehicle.h"

class Database
{
public:
	~Database()
	{
		vehicles.clear();
	}
	void Create(Vehicle::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(Vehicle::eType type);
	std::unique_ptr<Vehicle> Create(int t);

	void Load(const std::string& filename);
	void Save(const std::string& filename);

protected:
	std::vector<std::unique_ptr<Vehicle>> vehicles;
};
