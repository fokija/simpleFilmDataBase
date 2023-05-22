#include "movie.h"

void Movie::setTitle(std::string setTitle)
{
    m_title = setTitle;
}
void Movie::setReleaseYear(unsigned short setYear)
{
    m_releaseYear = setYear;
}
void Movie::setDirector(std::string setDirector)
{
    m_director = setDirector;
}
void Movie::setGenre(std::string setGenre)
{
    m_genre = setGenre;
}
void Movie::setActor1(std::string setActor1)
{
    m_actor1 = setActor1;
}
void Movie::setActor2(std::string setActor2)
{
    m_actor2 = setActor2;
}
std::string Movie::getTitle()
{
    return m_title;
}
unsigned short Movie::getReleaseYear()
{
    return m_releaseYear;
}
std::string Movie::getDirector()
{
    return m_director;
}
std::string Movie::getGenre()
{
    return m_genre;
}
std::string Movie::getActor1()
{
    return m_actor1;
}
std::string Movie::getActor2()
{
    return m_actor2;
}