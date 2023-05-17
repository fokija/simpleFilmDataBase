#include "manager.h"
#include "base.h"
#include "movie.h"
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
    std::cout << std::endl;
    std::cout << "=== Options ===" << std::endl;
    std::cout << "===============" << std::endl;
    std::cout << "1. Add movie" << std::endl;
    std::cout << "2. Edit movie" << std::endl;
    std::cout << "3. Delete movie" << std::endl;
    std::cout << "4. Display base" << std::endl;
    std::cout << "5. Save as" << std::endl;
    std::cout << "6. Close" << std::endl;
    std::cout << "Choose the correct action number and press [ENTER]" << std::endl;
    std::cout << std::endl;
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
                createNewBase();
                openedBaseMenu();
                openedBaseMenuActions();
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
void createNewBase()
{
    system("clear");
    std::string myName;
    std::cout << std::endl << "Enter the base name:   ";
    std::cin >> myName;
    Base myBase;
    myBase.setBaseName(myName);
    system("clear");
}

void openedBaseMenuActions()
{
    char actionNumber;
    
    do
    {
        std::cin >> actionNumber;

        switch (actionNumber)
        {
            case '1':
                system("clear");
                std::cout << "1. add movie actions" << std::endl;
                
                break;
            case '2':
                system("clear");
                std::cout << "2. edit movie actions" << std::endl;
                break;
            case '3':
                system("clear");
                std::cout << "3. delete movie actions" << std::endl;
                break;
             case '4':
                system("clear");
                std::cout << "4. Display base" << std::endl;
                break;
             case '5':
                system("clear");
                std::cout << "5. Save the base" << std::endl;
                break;
            
            default:
                openedBaseMenu();
                break;
        }    
    } while ((actionNumber < 49 || actionNumber > 53) && actionNumber != 54);
}
