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
        Movie() {};
        void setTitle(std::string);
        void setReleaseYear(unsigned short);
        void setDirector(std::string);
        void setGenre(std::string);
        void setActor1(std::string);
        void setActor2(std::string);
};

#endif