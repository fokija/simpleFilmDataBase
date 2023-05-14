#include <iostream>
#include <vector>
#include <fstream>

class Movie;
class Base
{
    private:
        std::vector<Movie> movieList;
        std::string baseName;
    public:
        Base();


};

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

int main()
{


    return 0;
}