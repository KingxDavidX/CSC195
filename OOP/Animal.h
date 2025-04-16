#pragma once
#include <iostream>

class Animal
{
public:
	Animal()
	{
		setLimbs(0);
		std::cout << "Animal Constructor\n";
		*ptr = 25;
	}
	Animal(int limbs)
	{
		setLimbs(limbs);
		std::cout << "Animal Constructor 2\n";
	}
	~Animal()
	{
		delete ptr;
		std::cout << "Animal Destructor\n";
	}
	virtual void travel();
	virtual void speak() = 0; //pure functional function
	int getLimbs() { return limbs; }
	void setLimbs(int amount) { limbs = amount; }
protected:
	int limbs;
	int* ptr = nullptr;

private:

};
