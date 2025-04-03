#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	void Read();
	void Write();

private:
	string name;
	short age;
	unsigned int zipcode;
	float wage;
	float hoursWorked;

	static const float TAX;
};