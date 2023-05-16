#ifndef BASE_H
#define BASE_H

#include "movie.h"
#include <vector>
#include <string>


class Base
{
    private:
        std::vector<Movie> movieList;
        std::string baseName;
    public:
        Base();
        
};


#endif