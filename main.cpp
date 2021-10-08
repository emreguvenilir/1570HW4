//Programmer: Emre Guvenilir
//Student ID: efgtnd
//Section: 101
//Date:         10/7/2021
//Purpose: Homework #4: The Infiltration of Team Picket

#include <iostream>
#include "helper.h"

using namespace std;
int main()
{
  const int arrSize = 5,maxCodemonWithoutSuspicion =6,maxStudentAge =30,minCodemon =0,maxCodemon=100;
  const string student= "Student",faculty = "Faculty",staff = "Staff";
  char waiting;
  Entrant infoArr[arrSize];
  bool suspectArr[arrSize]= {false,false,false,false,false}; //array of booleans used to identify if an Entrant is a suspect based on entered data
  bool suspectPresent = false;

  cout<< "---Now booting up Codemon Academy security system---"<<endl;

  do
  {
    for(int i=0;i<arrSize;i++)
    {
      cout<<"\nEnter your first name: ";
      cin>> infoArr[i].fName;
          
      cout<<"\nEnter your last name: ";
      cin>> infoArr[i].lName;

      do
      {
        cout<<"\nEnter your age: ";
        cin>> infoArr[i].age;
      }while(infoArr[i].age<5 || infoArr[i].age > 100); //All inputs use input validation for the given ranges

      do
      {
        cout<<"\nEnter your occupation: ";
        cin>> infoArr[i].occupation;
      } while (infoArr[i].occupation!= student && infoArr[i].occupation!= faculty && infoArr[i].occupation!= staff);
          
      do
      {
        cout<<"\nEnter the number of Codemon you have: " << endl;
        cin>> infoArr[i].numOfCodemon;
      }while(infoArr[i].numOfCodemon<minCodemon || infoArr[i].numOfCodemon > maxCodemon);

      //Check if an Entrant is a suspect, if so updated in bool array and the general variable
      if((infoArr[i].age >= maxStudentAge && infoArr[i].occupation==student) || infoArr[i].numOfCodemon >maxCodemonWithoutSuspicion)
      {
        suspectArr[i] = true;
        suspectPresent = true;
      }
    }
        
    if(suspectPresent==false)
    {
      cout << "\nNone of the entrants were suspected of spycraft, all were allowed to enter!" << endl;
    }
    else
    {
      cout << "\nThe following entrants have been denied entry due to suspicions of Team Picket affiliations:" << endl;
      for(int j=0;j<arrSize;j++)
      {
        if(suspectArr[j]==true)
        {
          printEntrant(infoArr[j]);
        }
      }
  }

    do
    {
      cout<<"\nAre there more people waiting to enter the academy?\n" << endl;
      cin >> waiting;
    }while(waiting != 'Y' && waiting != 'y' && waiting != 'N' && waiting != 'n');
  }while(waiting == 'Y' || waiting == 'y');

  cout << "\nGoodbye.";
}
