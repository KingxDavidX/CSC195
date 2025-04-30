#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Database.h"
#include "Motorcycle.h"





int main()
{
    Database* database = new Database;
    bool quit = false;
    while (!quit)
    {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Brand\n4 - Display by Type\n5 - Load\n6 - Save\n7 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        {
            std::cout << "Enter type(0 for Car, 1 for Motorcycle): ";
            int t;
            std::cin >> t;
            database->Create(static_cast<Vehicle::eType>(t));
            break;
        }
        case 2:
        {
            database->DisplayAll();
            break;
        }
        case 3:
        {
            std::cout << "Enter brand: ";
            std::string brand;
            std::cin >> brand;
            database->Display(brand);
            break;
        }
        case 4:
        {
            std::cout << "Enter type (0 for Car, 1 for Motorcycle): ";
            int t;
            std::cin >> t;
            database->Display(static_cast<Vehicle::eType>(t));
            break;
        }
        case 5:
        {
            std::cout << "enter filename: ";
            std::string name;
            std::cin >> name;
            database->Load(name);
            break;
        }
        case 6:
        {
            std::cout << "enter filename: ";
            std::string file;
            std::cin >> file;
            database->Save(file);
            break;
        }
        case 7:
        {
            quit = true;
            break;
        }
        }
    }
    delete database;
    _CrtDumpMemoryLeaks();
}

