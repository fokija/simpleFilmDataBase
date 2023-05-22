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
        unsigned int m_recordsCounter;
    public:
        Base() {}
        ~Base() {}
        void setBaseName(std::string);
        void addMovieToBase(Movie);
        //void increaseRecordsCounter();
        //void decreaseRecordsCounter();
        //unsigned int getRecordsCouner();
        std::vector<Movie> getVectorMovieFromBase();
};


#endif