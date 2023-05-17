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
        Base(std::string baseName, std::vector<Movie> movieList);
        ~Base() {}
        void setBaseName(std::string);
};


#endif