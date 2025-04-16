#include <iostream>
#include <list>
#include <vector>

#include "Dog.h"
#include "Snake.h"

using namespace std;

int main()
{
    //Animal animal;      //Allocated memory on stack - no "new" keyword
    //animal.travel();

    Dog dog(false);
    dog.travel();

    //Animal* ptrAnimal = new Animal;
    //ptrAnimal->travel();
    //(*ptrAnimal).travel();      //this does the same thing as the arrow

    Animal* ptrDog = new Dog(true);
    ptrDog->travel();

    /*cout << animal.getLimbs() << endl;

    {
        Animal* AnimalPtr = new Animal;
    }*/

    Snake python(false);
    python.travel();
    python.speak();

    vector<Animal*> animals;

    animals.push_back(new Dog);
    animals.push_back(new Dog(false));
    animals.push_back(new Snake);
    animals.push_back(new Snake(false));

    cout << "----------------------------------------------\n";

    for (Animal* ani : animals)
    {
        ani->speak();
    }

    for (Animal* ani : animals)
    {
        delete ani;
    }

    animals.clear();



}

