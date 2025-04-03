#include <iostream>
#include "Employee.h"

using namespace std;

//typedef double salary;    -- traditional c++ way

//This is better than just making multiple declarations for different wages (in this example) because it is easier to change from float to double if you need a atribute to be more accurate or hold more data
//using salary = double;          //modern c++ way

int main() {
    int numEmployees;
    cout << "Number of employees (max 5): ";
    cin >> numEmployees;

    if (numEmployees > 5) numEmployees = 5;

    Employee employees[5];

    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEnter details for Employee " << (i + 1) <<
            ":\n";
        employees[i].Read();
    }

    cout << "\n--- payroll Summary ---\n";
    for (int i = 0; i < numEmployees; i++) {
        employees[i].Write();
    }

    return 0;

}



