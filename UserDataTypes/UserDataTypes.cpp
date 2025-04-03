#include <iostream>
#include "Declarations.h"

using namespace std;

//typedef double salary;    -- traditional c++ way

//This is better than just making multiple declarations for different wages (in this example) because it is easier to change from float to double if you need a atribute to be more accurate or hold more data
using salary = double;          //modern c++ way

int main() {
    salary wageReception = 14.4;
    salary wageAnalyst = 18.5;
    salary wageengineer = 32.4;

    cout << "User Data Types\n";

    Sandwich pastrami;
    pastrami.meat = PASTRAMI;
    pastrami.heatSandwich();
    //pastrami.isHot = true;
    pastrami.weight = 1.0;

    cout << sizeof(Sandwich) << endl;
    cout << sizeof(pastrami) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(float) << endl;

}



