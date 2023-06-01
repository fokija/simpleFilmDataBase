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
