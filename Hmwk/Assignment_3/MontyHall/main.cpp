//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: April 1, 2015, 7:48 AM
//========================================
//Purpose: Play the Monty Hall Game
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <cstdlib>
#include <ctime>
#include <iomanip>      //Parametric Library
using namespace std;	//Input/Output Library under standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Set the random number seed
    srand(static_cast<unsigned int> (time(0)));
    
    
    //Declare Variables
    int nGames, win = 0, loss = 0;
    char door, doorOpn;
    char stay;

    //Prompt user for inputs
    cout << "This is the Monty Hall Game, Let's make a deal "  << endl;
    cout << "How many games would you like to play (1-4x10^9)?"  << endl;
    cin >> nGames;
    cout << "Are you going to stay if given the opportunity type S for Stay\n";
    cout << "Type anything else to choose the other doors"  << endl;
    
    

    //Exit Program
    return 0;
}