#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
    Animal animal;      //Allocated memory on stack - no "new" keyword
    animal.travel();

    Dog dog;
    dog.travel();

    Animal* ptrAnimal = new Animal;
    ptrAnimal->travel();
    (*ptrAnimal).travel();      //this does the same thing as the arrow

    Animal* ptrDog = new Dog;
    ptrDog->travel();

    cout << animal.getLimbs() << endl;

    {
        Animal* AnimalPtr = new Animal;
    }

}

