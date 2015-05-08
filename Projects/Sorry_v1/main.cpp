//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: May 4, 2015, 6:11 PM
//==========================================================================
//Purpose: Project 1 - "Sorry"
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <ctime>        //Time Library
#include <cstdlib>      //Utilities Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins
int main()
{
    //Seed the random number generator
    srand(time(0));
    
    //Declare variables
       
    //Prompt user for input
    
    //Output game board
    cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"
            "|  _   _ _ _ _ _ _ _ _ _ _ _ _ _  |\n"
            "| | | |                _ _ _ _ _| |\n"
            "| | | |              &|_ _ _ _ _  |\n"
            "| | | |                         | |\n"
            "| | | |                         | |\n"
            "| | |_|                         | |\n"
            "| |  #                          | |\n"
            "| |            SORRY!           | |\n"
            "| |                             | |\n"
            "| |                          @  | |\n"
            "| |                         |-| | |\n"
            "| |                         | | | |\n"
            "| |_ _ _ _ _                | | | |\n"
            "|  _ _ _ _ _|*              | | | |\n"
            "| |_ _ _ _ _ _ _ _ _ _ _ _ _| |_| |\n"
            "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n";
    

    //Exit the program
    return 0;
}