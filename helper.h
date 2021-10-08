//Programmer: Emre Guvenilir
//Student ID: efgtnd
//Section: 101
//Date:         10/7/2021
//Purpose: Homework #4: The Infiltration of Team Picket

#include <iostream>
using namespace std;

//Struct of name Entrant (to the school) with a string, string, int, string, and int
struct Entrant
{
    string fName;
    string lName;
    int age;
    string occupation;
    int numOfCodemon;
};
//Pre: Entrant ent must be defined and initialized, with all values of the struct being initialized
//Post: None, no return type
//Description: Prints out the information of an entrant in an organized manner
void printEntrant(Entrant ent);
