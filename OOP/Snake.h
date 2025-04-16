#pragma once
#include "Animal.h"
#include <iostream>

using namespace std;

class Snake: public Animal
{
public:
	Snake(bool snakeHasVenom) : Animal(0)
	{
		setLimbs(0);
		setHasVenom(snakeHasVenom);
		cout << "Snake Constructor\n";
	}
	Snake(): Animal(0)
	{
		setHasVenom(false);
		cout << "Snake Constructor 2\n";
	}
	~Snake()
	{
		cout << "Snake Destructor\n";
	}
	void travel() override;
	void speak() override;
	bool getHasVenom() { return hasVenom; }
protected:
	bool hasVenom;
	void setHasVenom(bool TorF) { hasVenom = TorF; }

};