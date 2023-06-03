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

    //m_movieList.erase(std::remove(m_movieList.begin(), m_movieList.end(), (m_movieList.end() - 1)), m_movieList.end())
    
    //v.erase(std::remove(v.begin(), v.end(), 5), v.end());
}

