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
void onePlyr();             //One player version (AI version)
void twoPlyr();             //Two player version
void trePlyr();             //Three player version
void forPlyr();             //Four player version

//Execution begins
int main()
{
    //Seed the random number generator
    srand(time(0));
    
    //Declare variables
    int card = 0;       //Card drawn
    int choice;         //Which option the user wants after they draw a card
    int nPlyrs;         //Number of players (1 - 4)
    
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
    cout << "\nPlease enter the number of players: ";
    cin >> nPlyrs;
    cin.ignore();
    
    if(nPlyrs == 1)
    {
        cout << "AI version" << endl;
    }
    else if(nPlyrs == 2)
    {
        cout << "2 player version" << endl;
    }
    else if(nPlyrs == 3)
    {
        cout << "3 player version" << endl;
    }
    else if(nPlyrs == 4)
    {
        cout << "4 player version" << endl;
    }
    else
    {
        cout << "\nThis game can only be played with 1 - 4 players" << endl;
        return 0;
    }
    
    //Begin the game
    cout << "\nPress the enter key to draw a card! ";
    cin.get();
    
    //generate a random card
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

int int_chk(int number)
{
    //Check for input
    while(!(cin >> number) || number < 0)
    {
        cout << "ERROR: Choice in not a positive integer\n"
                "Re-enter your choice: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    //Return choice after it has been validated
    return(number); 
}