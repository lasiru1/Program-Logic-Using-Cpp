//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: March 29, 2015, 2:02 AM
//========================================
//Purpose: Change for a Dollar Game
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;	//Input/Output Library under standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    short pennies, pValue;
    short nickels, nValue;
    short dimes, dValue;
    short quartrs, qValue;
    short total;

    //Promt user for input
    cout << setw(39) << "* Change for a Dollar Game *\n";
    cout << setw(39) << "----------------------------\n";
    cout << "Please provide the amount of coins required to make\n"
            "exactly one US dollar.\n";
    cout << "\nHow many pennies would you like to enter? ";

    //Validate Input
    while (!(cin >> pennies) || (pennies < 0))
    {
            cout << "Hmmm. It seems you didn't input a correct number."
                    " Try again! ";
            cin.clear();
            cin.ignore(1e9, '\n');
    }
    cout << "How many nickels would you like to enter? ";
    while (!(cin >> nickels) || (nickels < 0))
    {
            cout << "Hmmm. It seems you didn't input a correct number."
                    " Try again! ";
            cin.clear();
            cin.ignore(1e9, '\n');
    }
    cout << "How many dimes would you like to enter? ";
    while (!(cin >> dimes) || (dimes < 0))
    {
            cout << "Hmmm. It seems you didn't input a correct number."
                    " Try again! ";
            cin.clear();
            cin.ignore(1e9, '\n');
    }
    cout << "How many quarters would you like to enter? ";
    while (!(cin >> quartrs) || (quartrs < 0))
    {
            cout << "Hmmm. It seems you didn't input a correct number."
                    " Try again! ";
            cin.clear();
            cin.ignore(1e9, '\n');
    }

    //Calculate and determine output
    pValue = pennies * 1;
    nValue = nickels * 5;
    dValue = dimes * 10;
    qValue = quartrs * 25;
    total = pValue + nValue + dValue + qValue;
    if (total == 100)
    {
        cout << "\nCongratulations! You Won! :D\n" << pennies << " penny/"
                "pennies + " << nickels << " nickel(s) + " << dimes <<
                " dime(s) + " << quartrs << " quarter(s)\n= one US dollar!\n";
    }
    else if (total > 100)
    {
        cout << "\nSorry! You Lost! :(\n" << pennies << " penny/pennies + "
                << nickels << " nickel(s) + " << dimes << " dime(s) + "
                << quartrs << " quarter(s)\nis MORE than one US dollar!\n";
    }
    else if (total < 100)
    {
        cout << "\nSorry! You Lost! :(\n" << pennies << " penny/pennies + "
                << nickels << " nickel(s) + " << dimes << " dime(s) + "
                << quartrs << " quarter(s)\nis LESS than one US dollar!\n";
    }
    cout << "\n" << endl;

    //Exit Program
    return 0;
}