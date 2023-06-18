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
        std::vector<Movie> getVectorMovieFromBase() const;
        std::string getBaseName() const;
        void deleteMovieFromBase(unsigned int);
        void editMovieFromBase(unsigned int);
};


#endif