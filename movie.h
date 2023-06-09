#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
    private:
        std::string m_title;
        unsigned short m_releaseYear;
        std::string m_director;
        std::string m_genre;
        std::string m_actor1;
        std::string m_actor2;
    public:
        Movie() {};
        ~Movie() {};
        void setTitle(std::string);
        void setReleaseYear(unsigned short);
        void setDirector(std::string);
        void setGenre(std::string);
        void setActor1(std::string);
        void setActor2(std::string);
        std::string getTitle() const;
        unsigned short getReleaseYear() const;
        std::string getDirector() const;
        std::string getGenre() const;
        std::string getActor1() const;
        std::string getActor2() const;
};

#endif