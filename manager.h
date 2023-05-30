#ifndef MANAGER_H
#define MANAGER_H

#include "base.h"

void mainMenu(); 
void openedBaseMenu();
void mainMenuActions(Base&);
Base createNewBase();
void openedBaseMenuActions(Base&);
Movie createNewMovie();
void displayBase(Base&);
void saveBase(Base&);
void openBase(Base&);


#endif