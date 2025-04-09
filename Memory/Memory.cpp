// Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void set(int& i) {
	i = 123;
}

void swap(int* i1, int* i2) {

	int temp = *i1;
	*i1 = *i2;
	*i2 = temp;
}

int main()
{
	int i1 = 10;
	int i2 = 20;

	int& r = i1;
	r = 40;

	set(i1);
	swap(&i1, &i2);

	int* p = nullptr;
	p = &i1;
	
	cout << i1 << endl; // Value of i1
	cout << i2 << endl; // value of i2
	cout << &i1 << endl; // address of i1
	cout << &r << endl; // address of r i.e., reference to i1, same address
	cout << p << endl; // value of p, i.e.,  reference to i1
	cout << &p << endl; // address of p
	cout << *p << endl; // dereference p, i.e., get the calue in the address sotred in the pointer

	cout << "-------------------------------------------------------------------\n";

	int number1 = 1;
	int* hnum = new int(4);

}