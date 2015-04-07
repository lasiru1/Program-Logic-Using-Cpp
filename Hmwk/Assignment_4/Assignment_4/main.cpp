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
void pennies_for_pay();

//Execution Begins
int main()
{
    //Declare menu variable choice
    char choice, another;
    
    //Repeat the menu
    do
    {
        //Display the menu
        if (another == 'Y' || another == 'y');
        {
            cout << "\n";
        }    
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
        
        //Conditions for exiting the program
        if (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' &&
            choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd' &&
            choice != 'E' && choice != 'e' && choice != 'F' && choice != 'f' &&
            choice != 'G' && choice != 'g' && choice != 'H' && choice != 'h' &&
            choice != 'I' && choice != 'i' && choice != 'J' && choice != 'j')
        {
            cout << "\nGood-bye!" << endl;
            return 0;
        }
        else
        {
            cout << "\n\n";
        }
        
        //Solve a problem that has been chosen
        switch (choice)
        {           
            case 'A' : distance_traveled();break;
            case 'a' : distance_traveled();break;
        };
        
       //Prompt for another solution
       cout << "\nWould you like to solve another problem? (Y/N) ";
       cin >> another;
    } while (another == 'Y' || another == 'y');
    
    //Exit Program
    return 0;
}

//************************** Distance Traveled *******************************//
void distance_traveled()
{
    //Declare Variables
    float vSpeed, hrs, dstance;

    //prompt user for input & validate
     cout << setw(43) << "* Distance Traveled *\n";
     cout << setw(43) << "---------------------\n";
     cout << "This program breaks up a vehicle's journey into intervals based"
             "\non the speed and amount of time traveled.\n";
     cout << "\nPlease enter the speed of the vehicle in miles per hour: ";
     while (!(cin >> vSpeed) || (vSpeed < 0))
     {
         cout << "\nERROR: Speed must be a nonnegative number: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     cout << "\nPlease enter the total time traveled in hours: ";
     while (!(cin >> hrs) || (hrs < 1))
     {
         cout << "\nERROR: Time traveled must be greater than 1 hour: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     cout << "\n";
     cout << setw(43) << "Hour   Distance Traveled\n";
     cout << setw(43) << "----   -----------------\n";
     
     //Loop to break the hours into intervals
     for (int i = 1; i <= hrs; i++)
     {
         //Calculate distance
         dstance = vSpeed * i;
         
         //Output the results
         cout << setw(21) << i << setw(14) << dstance << endl;
     }
     cout << "\n";
}

//************************** Pennies for Pay *******************************//
void pennies_for_pay()
{
    
    
    
    
    
    
    
    
    
    
    
}