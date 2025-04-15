#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

void arrayFunction() {
	string daysOfWeek[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	//the following code is required to get the size of the array, because sizeof doesn't do what you think it would
	int arrSize = sizeof(daysOfWeek);
	int elementSize = sizeof(daysOfWeek[0]);
	int numElements = arrSize / elementSize;
	cout << numElements << endl;

	for (string day : daysOfWeek) {
		cout << day << endl;
	}

	cout << "----------------------------------------------------------------------\n";
}

void vectorFunction() {
	vector<int> numbers = { 1, 2, 3, 4, 5 };
	//adding "6" and "7"
	numbers.push_back(6);
	numbers.push_back(7);
	//removing "6" and "7" 
	numbers.pop_back();
	numbers.pop_back();

	//Iterating through the vector and printing the numbers
	for (int number : numbers) {
		cout << number << endl;
	}

	cout << "----------------------------------------------------------------------\n";
}

void listFunction() {
	list<string> fruit = { "Apple", "Banana", "Orange" };
	fruit.emplace_front("Lemon");  // Emplace instead of push recommended by Intellisense
	fruit.emplace_back("Kiwi");
	fruit.remove("Apple");         // Removing apple

	//list<string>::iterator creates an iterator and just specifies that the iterator is for a list that holds a string
	for (list<string>::iterator it = fruit.begin(); it != fruit.end(); ++it) {
		cout << *it << endl;
	}

	cout << "----------------------------------------------------------------------\n";
}

void mapFunction() {
	map<string, int> groceryProducts = { {"Apple", 10}, {"Banana", 5}, {"Orange", 7} };
	//changing how many Apples there are
	groceryProducts["Apple"] = 20;

	//A for each loop
	for (const pair<string, int>& item : groceryProducts) {
		cout << item.first << ": " << item.second << endl;
	}
}

int main()
{
	//string fruits[5] = { "Banana", "Kiwi", "Mango", "chikoo", "Strawberry" };

	//vector<int> numbers;
	//numbers.push_back(1);
	//numbers.push_back(3);
	//numbers.push_back(5);
	//numbers.push_back(7);
	//numbers.push_back(25);

	//numbers.pop_back();
	//numbers.pop_back();

	//for (int i = 0; i < numbers.size(); i++) {
	//	cout << numbers[i] << endl;
	//}

	//cout << "----------------------------------------------------------------------\n";

	//// Pointer Arithmetic

	//string chemicals[5] = { "mercury", "hydrochloric acid", "chlorine", "bromine", "table salt" };

	//cout << chemicals[2] << "\n";
	//cout << chemicals << "\n";	//returns address of first element in the array
	//cout << &chemicals[0] << "\n";

	//int numb[2] = { 1,2 };
	//cout << numb << endl;
	//cout << sizeof(numb) << endl;
	//cout << (*chemicals).size() << endl;

	//cout << "----------------------------------------------------------------------\n";
	//cout << "----------------------------------------------------------------------\n";

	//cout << sizeof(chemicals) << endl;
	//cout << sizeof(chemicals[0]) << endl;
	//
	////manually calculate if using for iterating or just use for each loops
	//int size = sizeof(chemicals) / sizeof(chemicals[0]);

	////for loop
	//for (int i = 0; i < size; i++)
	//{
	//	cout << &chemicals[i] << endl;
	//}

	////for each loop
	//for (string chemical : chemicals)
	//{
	//	cout << chemical << endl;
	//}

	//cout << "----------------------------------------------------------------------\n";

	//string *p = chemicals;
	//cout << p << endl;
	//cout << ++p << endl;
	//cout << ++p << endl;
	//cout << --p << endl;

	//cout << p + 2 << endl;

	//cout << "----------------------------------------------------------------------\n";

	//// containers

	//list<string> cars = { "Hyundai", "Ferrari", "Mercedes", "Volvo" };
	//cout << cars.front() << endl;
	//cout << cars.back() << endl;

	//cars.pop_back();
	//cout << cars.back() << endl;
	//
	//cars.push_front("Corvette");
	//cout << cars.front() << endl;

	//map<string, int> pet = { {"Dogs", 23}, {"chemicals", 3}, {"Turtle", 43} };

	//pet["Dogs"] = 50;

	//cout << pet["Dogs"] << endl;

	//pet["Spiders"] = 2;

	//cout << pet.empty() << endl;

	arrayFunction();
	vectorFunction();
	listFunction();
	mapFunction();
	
}



