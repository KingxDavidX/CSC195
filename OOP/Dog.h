#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(bool tail) : Animal(4)
	{
		setHasTail(true);
		std::cout << "Dog Constructor\n";
	}
	Dog():Animal(4)
	{
		setHasTail(true);
		std::cout << "Dog Constructor 2\n";
	}
	void travel() override;
	void speak() override;
	bool getHasTail() { return hasTail; }
protected:
	bool hasTail;
	void setHasTail(bool tail) { hasTail = tail; }
};

