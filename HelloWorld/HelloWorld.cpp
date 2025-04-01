#include <iostream>
using namespace std;

int main() {
	cout << "Hello, World!" << endl;
	cout << "Git is now tracking this project!" << endl;

	int age;
	//This is how you are supposed to do string without using "namespace std" which is above
	std::cout << " Enter age: " << std::endl;
	std::cin >> age;

	//if you dont want to do "endl" you can do "\n" as long as its in parentheses, I dont have an exampke of this right now
	cout << age << endl;

	return 0;
}
