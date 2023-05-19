#include "base.h"

Base::Base(std::string baseName, std::vector<Movie> movieList)
{
    m_baseName = baseName;
    m_movieList = movieList;
};

void Base::setBaseName(std::string baseName)
{
    m_baseName = baseName;
};
void Base::addMovieToBase(Movie addMovie)
{
    m_movieList.push_back(addMovie);
};
