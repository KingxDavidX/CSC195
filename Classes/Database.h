#pragma once
#include <vector>

#include "Vehicle.h"

class Database
{
public:
	~Database()
	{
		for (Vehicle* vehicle: vehicles)
		{
			delete vehicle;
		}
	}
	void Create(Vehicle::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(Vehicle::eType type);

	void Load(const std::string& filename);
	void Save(const std::string& filename);

protected:
	std::vector<Vehicle*> vehicles;
};
