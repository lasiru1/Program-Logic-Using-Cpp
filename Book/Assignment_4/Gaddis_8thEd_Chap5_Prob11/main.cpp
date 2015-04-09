//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 8, 2015, 9:44 AM
//==========================================================================
//Purpose: Population
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const float CNVPCNT = 100.0f;     //Convert to a percentage

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    float cPopltn;      //Current population
    float dIncrse;      //Daily Increase
    float nDays;        //Number of days to multiply by
    float pGrowth;      //Population Growth

    //prompt user for inputs & validate
    cout << setw(37) << "* Population *\n";
    cout << setw(37) << "--------------\n";
    cout << "The population of Sphaerodactylus ariasae (Dwarf Gecko) is"
            "\nsuspected to have a large increase in population over the next"
            "\nfew years. This program will calculate and display the rise of"
            "\norganisms per day.";
    cout << "\nEnter the current population size to the nearest gecko: ";
    while (!(cin >> cPopltn) || (cPopltn < 2))
    {
        cout << "\nERROR: The current population can be no less than 2: "
                "\nRe-enter the current population size: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    cout << "\nEnter the average percentage of the daily growth rate: ";
    while (!(cin >> dIncrse) || (dIncrse < 0))
    {
        cout << "\nERROR: The average percentage must be a positive value: "
                "\nRe-enter the average percentage: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    cout << "\nEnter the number of days to calculate: ";
    while (!(cin >> nDays) || (nDays < 0))
    {
        cout << "\nERROR: The number of days can be no less than 1: "
                "\nRe-enter the number of days: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    
    //Display table
    cout << "\n";
    cout << setw(41) << "Day      Population\n";
    cout << setw(41) << "---      ----------\n";
    cout << setprecision(0) << fixed;
    
    //Loop the calculation of the population for each day
    for (int i = 1; i <= nDays; i++)
    {
        //Calculate population growth
        pGrowth = cPopltn + (dIncrse / CNVPCNT * cPopltn);
        
        //The current population is now the population Growth
        cPopltn = pGrowth;
        
        //Output the results
        cout << setw(23) << i << setw(14) << pGrowth << endl;
    }
    
    //Exit the program
    return 0;
}