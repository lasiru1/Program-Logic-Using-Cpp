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
    int card = 0;               //Card drawn
    int choice, pChoice;        //Which option the user wants after they draw a card
    int plyrs, nPlyrs;          //Number of players (1 - 4)
    int symbol, pSymbol;        //Player's symbol (*, #, &, @)
    
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
    do
    {
        //Prompt user for number of players
        cout << "\nPlease enter the number of players: ";
        nPlyrs = int_chk(plyrs);
        cin.ignore();
        
        //Determine number of players
        switch (nPlyrs)
        {
            case 1:
                cout << "AI version" << endl;
                break;
            case 2:
                cout << "2 player version" << endl;
                break;
            case 3:
                cout << "3 player version" << endl;
                break;
            case 4:
                cout << "4 player version" << endl;
                break;
            default:
                cout << "\nThis game can only be played with 1 - 4 players" << endl;  
        }        
    } while(nPlyrs >= 5);       //End do-while loop
    cout << endl;
    
    //Print players and their symbols
    cout << "Player 1: * \t Player 2: #" << endl;
    cout << "----------- \t -----------" << endl;

    //Begin the game
    cout << "\nPress the enter key to draw a card! ";
    cin.get();
    
    //generate a random card
    card = (rand() % 11) + 1;
    cout << endl;
    
    //Determine the card value and apply the rules
    if(card == 1)
    {
        cout << "You drew a 1!" << endl;
        cout << "1. Start" << endl;
        cout << "2. Move 1 space forward" << endl;
        cout << "3. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
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
                        "|*|                         | | | |\n"
                        "| |_ _ _ _ _                | | | |\n"
                        "|  _ _ _ _ _| *             | | | |\n"
                        "| |_ _ _ _ _ _ _ _ _ _ _ _ _| |_| |\n"
                        "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n";
            case 2:
                cout << " " << endl;    //Output modified game board
            case 3:
                cout << " " << endl;    //Output modifies game board
        }
    }
    else if(card == 2)
    {
        cout << "You drew a 2!" << endl;
        cout << "1. Start" << endl;
        cout << "2. Move 2 spaces forward" << endl;
        cout << "3. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
            case 3:
                cout << " " << endl;
        }
    }
    else if(card == 3)
    {
        cout << "You drew a 3!" << endl;
        cout << "1. Move 3 spaces forward" << endl;
        cout << "2. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
        } 
    }
    else if(card == 4)
    {
        cout << "You drew a 4!" << endl;
        cout << "1. Move 4 spaces backward" << endl;
        cout << "2. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
        }
    }
    else if(card == 5)
    {
        cout << "You drew a 5!" << endl;
        cout << "1. Move 5 spaces forward" << endl;
        cout << "2. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
        }
    }
    else if(card == 6)
    {
        cout << "You drew a 7!" << endl;
        cout << "1. Move 7 spaces forward" << endl;
        cout << "2. Split 7 spaces between pawns" << endl;
        cout << "3. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
            case 3:
                cout << " " << endl;
        }
    }
    else if(card == 7)
    {
        cout << "You drew a 8!" << endl;
        cout << "1. Move 8 spaces forward" << endl;
        cout << "2. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
            case 3:
                cout << " " << endl;
        }
    }
    else if(card == 8)
    {
        cout << "You drew a 10!" << endl;
        cout << "1. Move 10 spaces forward" << endl;
        cout << "2. Move 1 space backward" << endl;
        cout << "3. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
            case 3:
                cout << " " << endl;
        }
    }
    else if(card == 9)
    {
        cout << "You drew a 11!" << endl;
        cout << "1. Move 11 spaces forward" << endl;
        cout << "2. Switch places with an opposing pawn" << endl;
        cout << "3. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
            case 3:
                cout << " " << endl;
        }
    }
    else if(card == 10)
    {
        cout << "You drew a 12!" << endl;
        cout << "1. Move 12 spaces forward" << endl;
        cout << "2. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
                cout << " " << endl;    //Output modified game board
        }
    }
    else
    {
        cout << "You drew a \"Sorry!\" Card!" << endl;
        cout << "1. Move an opponent's pawn back to start" << endl;
        cout << "2. Skip turn" << endl;
        cout << "\nWhich choice would you like to make?" << endl;
        pChoice = int_chk(choice);
        
        switch(pChoice)
        {
            case 1:
                cout << " " << endl;    //Output modifies game board
            case 2:
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
        cout << "ERROR: Invalid Input.\n"
                "Please input a nonnegative integer: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    //Return choice after it has been validated
    return(number); 
}