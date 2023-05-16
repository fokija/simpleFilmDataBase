#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
    private:
        std::string title;
        unsigned short releaseYear;
        std::string director;
        std::string genre;
        std::string actor1;
        std::string actor2;
    public:
        Movie();

};

#endif