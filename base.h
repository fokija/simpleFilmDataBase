#ifndef BASE_H
#define BASE_H

#include "movie.h"
#include <vector>
#include <string>

class Base
{
    private:
        std::vector<Movie> m_movieList;
        std::string m_baseName;
    public:
        Base() {}
        ~Base() {}
        void setBaseName(std::string);
        void addMovieToBase(Movie);
        std::vector<Movie> getVectorMovieFromBase();
        std::string getBaseName();
        void deleteMovieFromBase(unsigned int);
};


#endif