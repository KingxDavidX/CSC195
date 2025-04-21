#include <iostream>

#include "Database.h"
#include "Motorcycle.h"

Database database;

int main()
{
    bool quit = false;
    while (!quit)
    {
        std::cout<< "1 - Create\n2 - Display All\n3 - Display by Brand\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
	        {
		        std::cout << "Enter type(0 for Car, 1 for Motorcycle): ";
                int t;
                std::cin >> t;
                database.Create(static_cast<Vehicle::eType>(t));
	        }
        case 2:
	        {
            database.DisplayAll();
	        }
        case 3:
	        {
            std::cout << "Enter brand: ";
            std::string brand;
            std::cin >> brand;
            database.Display(brand);
	        }
        case 4:
        {
            std::cout << "Enter type (0 for Car, 1 for Motorcycle): ";
            int t;
            std::cin >> t;
            database.Display(static_cast<Vehicle::eType>(t)); break;
        }
        case 5:
            quit = true;
            break;
        }
    }
}

