//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 7, 2015, 9:40 PM
//==========================================================================
//Purpose: Average Rainfall
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <string>
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const short MONTHS = 12;

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    short nYears, nMonths;
    float inches, tRain, aveRain;
    string mNames[MONTHS] =
    {
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"
    };
    
    //prompt user for input & validate
     cout << setw(38) << "* Average Rainfall *\n";
     cout << setw(38) << "--------------------\n";
     cout << "California is currently undergoing the greatest drought in"
             "\nhistory. This program calculates the average rainfall in"
             "\nrecent years. Enter any amount of years before 2015: ";
     while (!(cin >> nYears) || (nYears < 1))
     {
         cout << "\nERROR: You must enter at least one year."
                 "\nRe-enter the amount of years: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     
     //Initialize the total rainfall
     tRain = 0;
     
     //Loop the amount of years and months
     for (int i = 1; i <= nYears; i++)
     {
         cout << "\nYear " << i << ":\n";
         for (int j = 0; j < MONTHS; j++)
         {
             cout << "How many inches of rainfall did it rain in " << mNames[j]
                  << "? ";
             while (!(cin >> inches) || (inches < 0))
             {
                 cout << "\nERROR: Inches must be a positive value."
                         "\nRe-enter the amount of inches: ";
                 cin.clear();
                 cin.ignore(1e9, '\n');
             }
             //Count the total amount of rain 
             tRain += inches;
         } 
     }
     
     //calculate the number of months and the average rainfall
     nMonths = nYears * 12;
     aveRain = tRain / nMonths;
     
     //Output the results
     cout << setprecision(2) << fixed;
     cout << "\n";
     cout << "Number of months: " << nMonths << endl;
     cout << "Total inches of rainfall: " << tRain << endl;
     cout << "California's average rainfall for the past " << nYears <<
             " years: " << aveRain << " in./month." << endl;

    //Exit Program
    return 0;
}