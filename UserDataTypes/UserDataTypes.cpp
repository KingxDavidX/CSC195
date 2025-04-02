#include <iostream>
#include "Declarations.h"

using namespace std;

int main() {
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



