#pragma once

class Animal
{
public:
	Animal()
	{
		setLimbs(0);
		ptr = new int(25);
	}
	Animal(int limbs)
	{
		setLimbs(limbs);
	}
	~Animal()
	{
		delete ptr;
	}
	virtual void travel();
	int getLimbs() { return limbs; }
	void setLimbs(int amount) { limbs = amount; }
protected:
	int limbs;
	int* ptr = nullptr;

private:

};