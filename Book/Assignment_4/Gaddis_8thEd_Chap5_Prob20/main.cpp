//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 12, 2015, 9:03 PM
//==========================================================================
//Purpose: Random Number Guessing Game
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <cstdlib>      //General Utilities Library
#include <ctime>        //Time Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    unsigned short rNumber;     //Random number
    unsigned short guess;       //User's input (guess)

    //Seed the random number generator
    srand(time(0));
    
    //Generate random number
    rNumber = (rand() % 99) + 1;
    
    
    //Prompt user for input
    cout << setw(42) << "* Random Number Guessing Game *\n";
    cout << setw(42) << "-------------------------------\n";
    cout << "A secret number has been generated! This program will determine"
            "\nwhether your input is greater than or less than that of the"
            "\nsecret number.";
    cout << "\nEnter a number form 1 - 100: ";
    cin >> guess;
    
    //Loop until number is guessed correctly
    do
    {
        if (guess > rNumber)
        {
            cout << "Too High, try again: ";
            cin >> guess;
        }
        else if (guess < rNumber)
        {
            cout << "Too low, try again: ";
            cin >> guess;
        } 
    } while (guess != rNumber);
    
    //Display winning message
    cout << "\nCongratulations! You've successfully guessed the secret number!";
    
    //Exit Program
    return 0;
}