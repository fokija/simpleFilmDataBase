#include "manager.h"
#include "base.h"
#include "movie.h"
#include <iostream>

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
    system("clear");
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
        mainMenu();
        std::cin >> actionNumber;
        if (actionNumber >= 49 && actionNumber <= 50)
        {
            switch (actionNumber)
            {
            case '1':
                system("clear");
                createNewBase();
                openedBaseMenuActions();
                break;
            case '2':
                system("clear");
                std::cout << "tu wykona się akcja dla 2" << std::endl;
                openedBaseMenuActions();
                break;
            
            default:
                break;
            }    
        }    
    } while (actionNumber != 51);
}
Base createNewBase()
{
    system("clear");
    std::string myName;
    std::cout << std::endl << "Enter the base name:   ";
    std::cin >> myName;
    Base myBase;
    myBase.setBaseName(myName);
    system("clear");

    return myBase;
}

void openedBaseMenuActions()
{
    char actionNumber;
    do
    {
        openedBaseMenu();
        std::cin >> actionNumber;
        if (actionNumber >= 49 && actionNumber <= 53)
        {
            switch (actionNumber)
            {
                case '1':
                    system("clear");
                    createNewMovie();
                    //i jak teraz to wrzucić do bazy???
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
                    break;
            }    
        }
        
    } while (actionNumber != 54);
}
Movie createNewMovie()
{
    system("clear");
    Movie myMovie;
    std::string inputStringStream;
    unsigned short inputShortSream;
    std::cout << "Enter the movie name: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setTitle(inputStringStream);
    std::cout << std::endl;
    std::cout << "Enter the year of the movie's release: ";
    std::cin >> inputShortSream;
    myMovie.setReleaseYear(inputShortSream);
    std::cout << std::endl;
    std::cout << "Enter the name of director: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setDirector(inputStringStream);
    std::cout << std::endl;
    std::cout << "Enter the genre name: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setGenre(inputStringStream);
    std::cout << std::endl;
    std::cout << "Enter the name of actor 1: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setActor1(inputStringStream);
    std::cout << std::endl;
    std::cout << "Enter the name of actor 2: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setActor2(inputStringStream);
    system("clear");

    return myMovie;
}