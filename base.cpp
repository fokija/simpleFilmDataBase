#include "base.h"

void Base::setBaseName(std::string baseName)
{
    m_baseName = baseName;
};
void Base::addMovieToBase(Movie addMovie)
{
    m_movieList.push_back(addMovie);
};
// void Base::increaseRecordsCounter()
// {
//     m_recordsCounter++;
// }
// void Base::decreaseRecordsCounter()
// {
//     m_recordsCounter--;
// }
// unsigned int Base::getRecordsCouner()
// {
//     return m_recordsCounter;
// }
std::vector<Movie> Base::getVectorMovieFromBase()
{
    return m_movieList;
}
