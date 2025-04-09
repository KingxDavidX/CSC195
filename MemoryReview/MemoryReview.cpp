#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};
void Square(int& perameter) {
	perameter = perameter * perameter;
}
void Double(int* perameter) {
	*perameter = *perameter * 2;
}
int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	int intVar = 9;
	// declare a int reference and set it to the int variable above
	int& intRef = intVar;
	// output the int variable
	cout << intVar << endl;
	// set the int reference to some number
	intRef = 42;
	// output the int variable
	cout << intVar << endl;
	// what happened to the int variable when the reference was changed? (intVar changed to 42)
	// output the address of the int variable
	cout << &intVar << endl;
	// output the address of the int reference
	cout << &intRef << endl;
	// are the addresses the same or different? (Same)
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	Square(intVar);
	// output the int variable to the console
	cout << intVar << endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
	// ** POINTER VARIABLE **
	//
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* intPtr = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	intPtr = &intVar;
	// output the value of the pointer
	cout << *intPtr << endl;
	// what is this address that the pointer is pointing to? (pointing to the address of intVar)
	// output the value of the object the pointer is pointing to (1764)
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(intPtr);
	// output the dereference pointer
	cout << *intPtr << endl;
	// output the int variable created in the REFERENCE section
	cout << intVar << endl;
	// did the int variable's value change when using the pointer?
	// Yes
}