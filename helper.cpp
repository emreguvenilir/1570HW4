//Programmer: Emre Guvenilir
//Student ID: efgtnd
//Section: 101
//Date:         10/7/2021
//Purpose: Homework #4: The Infiltration of Team Picket

#include <iostream>
#include "helper.h"

using namespace std;
void printEntrant(Entrant ent)
{
  cout << "\nName: " << ent.fName << " " << ent.lName;
  cout << "\nAge: " << ent.age;
  cout << "\nOccupation: " << ent.occupation;
  cout << "\nNumber of Codemon: " << ent.numOfCodemon << endl;
}
