//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 8, 2015, 7:53 AM
//==========================================================================
//Purpose: Deep-Fried Twinkie Vending Machine
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
    char input[SIZE] = "";
    unsigned short totChng = 0, pTwnke = 350;
    char nQtrs, nDimes, nNikels;
    unsigned char another;
    
    //Prompt user for input
    cout << setw(46) << "* Deep-Fried Twinkie Vending Machine *\n";
    cout << setw(46) << "--------------------------------------\n";
    cout << "Try our new, delicious, deep-fried twinkies for only $3.50!\n"
            "Enter your change as: \"Dollar\", \"Quarter\", \"Dime\", and \"Nickel\"\n";
    cout << setprecision(2) << fixed;
    do
    {
        do
        {       
            cout << "\nInput coins/change: ";
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
                cout << "\nCoin not recognized!" << endl;
            }           
            cout << "\nTotal Change = $" << totChng / 100.0f << endl;
        } while (totChng < pTwnke);
    
        //Give Twinkie
        cout << "\n*Dispensing Fried-Twinkie*\n";

        //Calculate Change
        totChng -= pTwnke;
        cout << "\nYour change is: $" << totChng / 100.0f << endl;        

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
        totChng -= nDimes * 10;
        nNikels = totChng / 5;
        if (nNikels > 0)
        {
            cout << static_cast<int>(nNikels) << " Nickels Change" << endl;
        }
        cout << "Would you like to buy another? (Y/N) ";
        cin >> another;
    } while (another == 'Y' || another  == 'y');
    if (another != 'Y' || another != 'y')
    {
        cout << "\nEnjoy your Deep-Fried Twinkie!" << endl;
    }
    
    //Exit Program
    return 0;
}