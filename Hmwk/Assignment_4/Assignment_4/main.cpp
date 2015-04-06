//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 6, 2015, 10:17 AM
//==========================================================================
//Purpose: 10 problems utilizing a menu with a do-while loop and a switch
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes
void distance_traveled();

//Execution Begins
int main()
{
    //Declare menu variable choice
    char choice;
    
    //Repeat the menu
    do
    {
        //Display the menu
        cout << setw(25) << "* CSC5 Assignment 4 *\n";
        cout << setw(25) << "---------------------\n";
        cout << "A. \"Distance Traveled\"\n";
        cout << "B. \"Pennies for Pay\"\n";
        cout << "C. \"Average Rainfall\"\n";
        cout << "D. \"Population\"\n";
        cout << "E. \"Sales Bar Chart\"\n";
        cout << "F. \"Random Number Guessing Game\"\n";
        cout << "G. \"Square Display\"\n";
        cout << "H. \"Pattern Displays\"\n";
        cout << "I. \"Gravitational Force\"\n";
        cout << "J. \"Deep-Fried Twinkie Vending Machine\"\n";
        cout << "\nEnter any other key to exit the program.\n\n";
        
        //Prompt for input
        cout << "Which problem would you like to solve? ";
        cin >> choice;
        cout << "\n\n";
        
        //Solve a problem that has been chosen
        switch (choice)
        {
            case 'A' : distance_traveled();break;
            case 'a' : distance_traveled();break;
            default : cout << "Exit?" << endl;
        };
    } while (choice == 'A' || choice == 'a' || choice == 'B' || choice == 'b' ||
             choice == 'C' || choice == 'c' || choice == 'D' || choice == 'd' ||
             choice == 'E' || choice == 'e' || choice == 'F' || choice == 'f' ||
             choice == 'G' || choice == 'g' || choice == 'H' || choice == 'h' ||
             choice == 'I' || choice == 'i' || choice == 'J' || choice == 'j');

    //Exit Program
    return 0;
}

//************************** Distance Traveled *******************************//
void distance_traveled()
{
    
    
    
    
    
}