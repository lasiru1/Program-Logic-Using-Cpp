//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 20, 2015, 10:31 AM
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
void markup();          //Markup
void winDvsn();         //Winning Division
void sfsDrvg();         //Safest Driving Area
void flgDist();         //Falling Distance
void kntcNrg();         //Kinetic Energy
void tmp_tbl();         //Celsius Temperature Table
void cnToss();          //Coin Toss
void prsntVl();         //Present Value
void vrHsptl();         //Overloaded Hospital
void rpsGame();         //Rock, Paper, Scissors Game


//Execution Begins
int main()
{
    //Declare menu variable choice
    char choice, another;
    
    //Repeat the menu
    do
    {
        //Display the menu
        cout << "\n";
        cout << setw(25) << " CSC5 Assignment #5 \n";
        cout << setw(25) << "   by Uri Salazar   \n";
        cout << setw(25) << "--------------------\n";
        cout << "A. \"Markup\"\n";
        cout << "B. \"Winning Division\"\n";
        cout << "C. \"Safest Driving Area\"\n";
        cout << "D. \"Falling Distance\"\n";
        cout << "E. \"Kinetic Energy\"\n";
        cout << "F. \"Celsius Temperature Table\"\n";
        cout << "G. \"Coin Toss\"\n";
        cout << "H. \"Present Value\"\n";
        cout << "I. \"Overloaded Hospital\"\n";
        cout << "J. \"Rock, Paper, Scissors Game\"\n";
        cout << "\nEnter any other key to exit the program.\n\n";
        
        //Prompt for input
        cout << "Which problem would you like to solve? ";
        cin >> choice;
        cin.ignore();
        
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
            case 'A' : void markup();
            case 'a' : void markup();
            case 'B' : void winDvsn();
            case 'b' : void winDvsn();
            case 'C' : void sfsDrvg();
            case 'c' : void sfsDrvg();
            case 'D' : void flgDist();
            case 'd' : void flgDist();
            case 'E' : void kntcNrg();
            case 'e' : void kntcNrg();
            case 'F' : void tmp_tbl();
            case 'f' : void tmp_tbl();
            case 'G' : void cnToss();
            case 'g' : void cnToss();
            case 'H' : void prsntVl();
            case 'h' : void prsntVl();
            case 'I' : void vrHsptl();
            case 'i' : void vrHsptl();
            case 'J' : void rpsGame();
            case 'j' : void rpsGame();         
        };
        
       //Prompt for another solution
       cout << "\nWould you like to solve another problem? (Y/N) ";
       cin >> another;
       
    //Condition for exiting the loop
    } while (another == 'Y' || another == 'y');
    if (another != 'Y' || another != 'y')
    {
        cout << "\nGood-bye!" << endl;
    }
    
    //Exit the program
    return 0;
}

//********************************* Markup ***********************************//
void markup()
{
    
}