//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: March 30, 2015, 10:17 AM
//========================================
//Purpose: The Riddler (Find a four digit number that passes the conditions)
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;	//Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Loop for all possible addresses
    for (int d1000 = 0; d1000 <= 9; d1000++)    //1000's digit
    {
       for (int d100 = 0; d100 <= 9; d100++)    //100's digit
       {
          for (int d10 = 0; d10 <= 9; d10++)    //10's digit
          {
             for (int d1 = 0; d1 <= 9; d1++)    //1's digit
             {
                if ((d1000 == 3 * d10)                 &&
                   (d1 % 2 == 1)                       &&
                   ((d1000 + d100 + d10 + d1) == 27)   &&
                   (d1 != d10 && d1 != d100 && d1 != d1000 && d10 != d100 && d10 != d1000 && d100 != d1000))
                {
                    cout << "The Address Number = ";
                    cout << d1000 << d100 << d10 << d1 << endl;
                }
             }
          }                   
       }               
    }    
    
    //Exit Program
    return 0;
}