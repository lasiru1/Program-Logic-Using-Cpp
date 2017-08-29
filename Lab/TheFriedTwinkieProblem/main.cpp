//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 8, 2015, 7:53 AM
//==========================================================================
//Purpose: The Fried Twinkie Problem
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <string.h>     //String Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main ()
{
    //Declare Variables
    const int SIZE = 80;
    char input[SIZE] = "";\
    unsigned short totChng = 0, pTwnke = 350;
    char nQtrs, nDimes, nNikels;
    
    //Prompt user for input
    cout << "This is a fried twinkie machine" << endl;
    cout << "Fried twinkies cost $3:50" << endl;
    cout << setprecision(2) << showpoint;
    do
    {       
        cout << "Input coins/change as: " << endl;
        cout << "Dollar, Quarter, Dime, and Nickel" << endl;
        cin >> input;
        if (strcmp(input, "Dollar") == 0)
        {
            totChng += 100;
        }
        else if (strcmp(input, "Quarter") == 0)
        {
            totChng += 25;
        }
        else if (strcmp(input, "Dime") == 0)
        {
            totChng += 10;
        }
        else if (strcmp(input, "Nickel") == 0)
        {
            totChng += 5;
        }
        else
        {
            cout << "No slugs allowed" << endl;
        }           
        cout << "\nTotal Change = $" << totChng / 100.0f << endl;
    } while (totChng < pTwnke);
    
    //Give Twinkie
    cout << "Here is your Fried Twinkie" << endl;
    
    //Calculate Change
    totChng -= pTwnke;
    cout << "Your change is: $" << totChng / 100.0f << endl;        
    
    //How many quarters
    nQtrs = totChng / 25;
    if (nQtrs > 0)
    {
       cout << static_cast<int>(nQtrs) << " Quarters Change" << endl;   
    }
   
    //How many dimes
    totChng -= nQtrs * 25;
    nDimes = totChng / 10;
    if (nDimes > 0)
    {
        cout << static_cast<int>(nDimes) << " Dimes Change" << endl;
    }
    
    //How many nickels
    totChng -= nQtrs * 10;
    nNikels = totChng / 5;
    if (nNikels > 0)
    {
        cout << static_cast<int>(nDimes) << " Nickels Change" << endl;
    }
    
    
    //Exit Program
    return 0;
}