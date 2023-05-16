#include "manager.h"
#include <iostream>
#include <stdlib.h>


void mainMenu()
{
    system("clear");
    std::cout << std::endl;
    std::cout << "=== Main Menu ===" << std::endl;
    std::cout << "=================" << std::endl;
    std::cout << "1. Create new data base" << std::endl;
    std::cout << "2. Load data base" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Choose the correct action number and press [ENTER]" << std::endl;
    std::cout << std::endl;
}
void openedBaseMenu()
{
    std::cout << std::endl << std::endl;
    std::cout << "=== Options ===" << std::endl;
    std::cout << "===============" << std::endl;
    std::cout << "1. Add movie" << std::endl;
    std::cout << "2. Edit movie" << std::endl;
    std::cout << "3. Delete movie" << std::endl;
    std::cout << "4. Display base" << std::endl;
    std::cout << "5. Save as" << std::endl;
    std::cout << "6. Close" << std::endl;
    std::cout << std::endl << std::endl;
}
void mainMenuActions()
{
    char actionNumber;
    
    do
    {
        std::cin >> actionNumber;

        switch (actionNumber)
        {
        case '1':
            system("clear");
            std::cout << "tu wykona się akcja dla 1";
            openedBaseMenu();
            break;
        case '2':
            system("clear");
            std::cout << "tu wykona się akcja dla 2" << std::endl;
            openedBaseMenu();
            break;
        
        default:
            mainMenu();
            break;
        }    
    } while ((actionNumber < 49 || actionNumber > 50) && actionNumber != 51);
}

