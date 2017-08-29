//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 13, 2015, 3:42 PM
//==========================================================================
//Purpose: Pattern Displays
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Prompt user for input
    cout << setw(38) << "* Pattern Displays *\n";
    cout << setw(38) << "--------------------\n";
    cout << "This program displays two triangle-like patterns utilizing"
            "\n\"nested for-loops\".";
    cout << "\nPress the Enter key to display the patterns... ";
    cin.get();
    cout << endl;
    
    //Pattern A
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "+";
        }
        cout << endl;
    }
    cout << endl;
    
    //Pattern B
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "+";
        }
        cout << endl;
    }
    cout << endl;

    //Exit Program
    return 0;
}