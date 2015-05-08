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
int int_chk(int);           //Function to validate input is a positive integer

//Execution begins
int main()
{
    //Seed the random number generator
    srand(time(0));
    
    //Declare variables
    int card = 0;       //Card drawn
    int choice;         //Which option the user wants after they draw a card
    
    //Output game board
    cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"
            "|  _   _ _ _ _ _ _ _ _ _ _ _ _ _  |\n"
            "| | | |                _ _ _ _ _| |\n"
            "| | | |            &  |_ _ _ _ _  |\n"
            "| | | |                         | |\n"
            "| | | |                         | |\n"
            "| | |_|                         | |\n"
            "| |                             | |\n"
            "| |  #         SORRY!           | |\n"
            "| |                          @  | |\n"
            "| |                          _  | |\n"
            "| |                         | | | |\n"
            "| |                         | | | |\n"
            "| |_ _ _ _ _                | | | |\n"
            "|  _ _ _ _ _| *             | | | |\n"
            "| |_ _ _ _ _ _ _ _ _ _ _ _ _| |_| |\n"
            "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n";
    
    //Prompt user for input
    cout << "\nPress the enter key to draw a card!" << endl;
    cin.get();
    
    //Draw a random card
    card = (rand() % 11) + 1;
    cout << card;
    cout << endl;
    
    //Determine the card value and apply the rules
    if(card == 1)
    {
        cout << "You drew a 1!" << endl;
        cout << "1. Start" << endl;
        cout << "2. Move 1 space forward" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        cin >> choice;
        int_chk(choice);
        
        switch(choice)
        {
            case '1' :
                cout << " " << endl;    //Output modifies game board
            case '2' :
                cout << " " << endl;    //Output modified game board
        }
    }
    
    //Exit the program
    return 0;
}

int int_chk(int choice)
{
    //Check for input
    while(!(cin >> choice) || choice < 0)
    {
        cout << "ERROR: Choice in not a positive integer\n"
                "Re-enter your choice: " << endl;
        cin >> choice;
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    //Return choice after it has been validated
    return(choice); 
}