//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 13, 2015, 12:53 PM
//==========================================================================
//Purpose: Square Display
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
    //Declare Variables
    short size;
    
    //Prompt user for input
    cout << setw(42) << "* Square Display *\n";
    cout << setw(42) << "------------------\n";
    cout << "This program displays the shape of a square whose length and width"
            "\nis determined by the user's input.";
    cout << "\nEnter a number from 1 - 15: ";
    
    //Validate Input
    while (!(cin >> size) || (size < 1) || (size > 15))
    {
        cout << "\nERROR: Value is not an integer from 1 - 15."
                "\nRe-enter the number: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }

    //Begin Looping the character "X"
    cout << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << setw(30);
        for (int j = 1; j <= size; j++)
        {
            cout << "X";
        }
        cout << endl;
    }


    //Exit Program
    return 0;
}