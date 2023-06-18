#ifndef MANAGER_H
#define MANAGER_H

#include "base.h"

namespace manager
{
    void mainMenu(); 
    void openedBaseMenu();
    void mainMenuActions(Base&);
    Base createNewBase();
    void openedBaseMenuActions(Base&);
    Movie createNewMovie();
    void displayBase(const Base&);
    void saveBase(const Base&);
    void openBase(Base&);
    void deleteMovie(Base&);
    void editMovie(Base&);
}
#endif