#include <iostream>
#include <vector>
#include "base.h"

void Base::setBaseName(std::string baseName)
{
    m_baseName = baseName;
};
void Base::addMovieToBase(Movie addMovie)
{
    m_movieList.push_back(addMovie);
};
std::vector<Movie> Base::getVectorMovieFromBase()
{
    return m_movieList;
}
std::string Base::getBaseName()
{
    return m_baseName;
}
void Base::deleteMovieFromBase(unsigned int index)
{
    m_movieList.erase(m_movieList.begin() + (index - 1));
}
void Base::editMovieFromBase(unsigned int index)
{
    std::string inputStringStream;

    std::cout << "Enter a NEW movie name: ";
    std::getline(std::cin, inputStringStream);
    m_movieList[index - 1].setTitle(inputStringStream);

    std::cout << "Enter the NEW year of the movie's release: ";
    std::getline(std::cin, inputStringStream);
    m_movieList[index - 1].setReleaseYear(std::atoi(inputStringStream.c_str()));

    std::cout << "Enter the NEW name of director: ";
    std::getline(std::cin, inputStringStream);
    m_movieList[index - 1].setDirector(inputStringStream);

    std::cout << "Enter the NEW genre name: ";
    std::getline(std::cin, inputStringStream);
    m_movieList[index - 1].setGenre(inputStringStream);

    std::cout << "Enter the NEW name of actor 1: ";
    std::getline(std::cin, inputStringStream);
    m_movieList[index - 1].setActor1(inputStringStream);

    std::cout <<  "Enter the NEW name of actor 2: ";
    std::getline(std::cin, inputStringStream);
    m_movieList[index - 1].setActor2(inputStringStream);
}
