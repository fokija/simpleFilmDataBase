#include "manager.h"
#include "base.h"
#include "movie.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>


void mainMenu()
{
    //system("clear");
    std::cout << std::endl;
    std::cout << "=== Main Menu ===" << std::endl;
    std::cout << "=================" << std::endl;
    std::cout << "1. Create new data base" << std::endl;
    std::cout << "2. Load data base" << std::endl;
    std::cout << "3. Exit" << std::endl << std::endl;
    std::cout << "Choose the correct action number and press [ENTER] :  ";
}

void openedBaseMenu()
{
    //system("clear");
    std::cout << std::endl;
    std::cout << "=== Options ===" << std::endl;
    std::cout << "===============" << std::endl;
    std::cout << "1. Add movie" << std::endl;
    std::cout << "2. Edit movie" << std::endl;
    std::cout << "3. Delete movie" << std::endl;
    std::cout << "4. Display base" << std::endl;
    std::cout << "5. Save base" << std::endl;
    std::cout << "6. Close" << std::endl << std::endl;
    std::cout << "Choose the correct action number and press [ENTER] :  ";
}

void mainMenuActions(Base& base)
{  
    char actionNumber;
    do
    {
        mainMenu();
        std::cin >> actionNumber;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        if (actionNumber >= 49 && actionNumber <= 50)
        {
            switch (actionNumber)
            {
            case '1':
                //system("clear");
                base = createNewBase();
                openedBaseMenuActions(base);
                break;
            case '2':
                //system("clear");
                openBase(base);
                openedBaseMenuActions(base);
                break;
            
            default:
                break;
            }    
        }    
    } while (actionNumber != 51);
}

Base createNewBase()
{
    //system("clear");
    std::string myName;
    std::cout << std::endl << "Enter the base name:   ";
    std::cin >> myName; // better change to getline function
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    Base myBase;
    myBase.setBaseName(myName);
    //system("clear");

    return myBase;
}

void openedBaseMenuActions(Base& base)
{
    char actionNumber;
    do
    {
        openedBaseMenu();
        std::cin >> actionNumber;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        if (actionNumber >= 49 && actionNumber <= 53)
        {
            switch (actionNumber)
            {
                case '1':
                    {
                        //system("clear");
                        Movie createdMovie = createNewMovie();
                        base.addMovieToBase(createdMovie);
                        break;
                    }
                case '2':
                    //system("clear");
                    std::cout << "2. edit movie actions" << std::endl;
                    break;
                case '3':
                    //system("clear");
                    deleteMovie(base);
                    break;
                case '4':
                    //system("clear");
                    displayBase(base);
                    //getchar();
                    break;
                case '5':
                    //system("clear");
                    std::cout << "5. Save the base" << std::endl;
                    saveBase(base);
                    break;
                
                default:
                    break;
            }    
        }

    } while (actionNumber != 54);
}

Movie createNewMovie()
{
    //system("clear");
    Movie myMovie;
    std::string inputStringStream;
    std::cout << "Enter the movie name: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setTitle(inputStringStream);
    
    std::cout << "Enter the year of the movie's release: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setReleaseYear(std::atoi(inputStringStream.c_str()));
   
    std::cout << "Enter the name of director: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setDirector(inputStringStream);
   
    std::cout << "Enter the genre name: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setGenre(inputStringStream);
 
    std::cout << "Enter the name of actor 1: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setActor1(inputStringStream);
    
    std::cout << "Enter the name of actor 2: ";
    std::getline(std::cin, inputStringStream);
    myMovie.setActor2(inputStringStream);
    //system("clear");

    return myMovie;
}
void displayBase(Base& base)
{
    std::cout << std::endl;
    std::vector<Movie> movieList = base.getVectorMovieFromBase();
    for (size_t i = 0; i < movieList.size(); i++)
    {
        std::string title = movieList[i].getTitle(); 
        unsigned short releaseYear = movieList[i].getReleaseYear();
        std::string director = movieList[i].getDirector();
        std::string genre = movieList[i].getGenre();
        std::string actor1 = movieList[i].getActor1();
        std::string actor2 = movieList[i].getActor2();

        std::cout << (i+1) << " " << title << " " << releaseYear << " " << director
            << " " << genre << " " << actor1 << " " << actor2 << std::endl;
    }
}

void saveBase(Base& base)
{
    std::ofstream file;

    file.open("movieBase.txt", std::ios::out);

    if (file.is_open())
    {
        std::vector<Movie> movieList = base.getVectorMovieFromBase();
        file << base.getBaseName() << std::endl;
        for (size_t i = 0; i < movieList.size() ; i++)
        {
            file << movieList[i].getTitle() << std::endl;
            file << movieList[i].getReleaseYear() << std::endl;
            file << movieList[i].getDirector() << std::endl;
            file << movieList[i].getGenre() << std::endl;
            file << movieList[i].getActor1() << std::endl;
            file << movieList[i].getActor2() << std::endl;
        }
        file.close();
    }
    else
    {
        std::cout << "The file was not opened correctly" << std::endl;
    }      
}

void openBase(Base& base)
{
    std::ifstream file;
    file.open("movieBase.txt", std::ios::in);

    if (file.is_open())
    {
        base = {}; //needed other method to clear base vector
        std::string lineReader;
        getline(file, lineReader);
        base.setBaseName(lineReader);
        Movie movie;
        
        do
        {
            getline(file, lineReader);
            movie.setTitle(lineReader);
            getline(file, lineReader);
            movie.setReleaseYear(std::atoi(lineReader.c_str()));
            getline(file, lineReader);
            movie.setDirector(lineReader);
            getline(file, lineReader);
            movie.setGenre(lineReader);
            getline(file, lineReader);
            movie.setActor1(lineReader);
            getline(file, lineReader);
            movie.setActor2(lineReader);
            base.addMovieToBase(movie);
           
        } while (!file.eof());
        
        file.close();
    }
    else
    {
        std::cout << "File could not be opened or does not exist" << std::endl;
    }    
}

void deleteMovie(Base& base)
{
    unsigned int movieIndex;

    std::cout << "Type index of the movie and press [ENTER] or [0] to terminate the operation :  ";
    std::cin >> movieIndex;
    if (movieIndex == 0) { return; }
    if (base.getVectorMovieFromBase().empty() || movieIndex > base.getVectorMovieFromBase().size())
    {
        std::cout << "The base is empty or the index does not exist!";
    }
    else
    {
        base.deleteMovieFromBase(movieIndex);
    }
}