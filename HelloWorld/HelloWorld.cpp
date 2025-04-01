#include <iostream>
using namespace std;

int main() {
	cout << "Hello, World!" << endl;
	cout << "Git is now tracking this project!" << endl;

	int age;
	//This is how you are supposed to do string without using "namespace std" which is above
	std::cout << " Enter age: " << std::endl;
	std::cin >> age;

	cout << age << endl;

	return 0;
}
