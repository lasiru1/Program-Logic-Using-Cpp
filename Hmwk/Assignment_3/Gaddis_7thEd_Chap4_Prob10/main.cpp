//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: March 30, 2015, 6:23 PM
//========================================
//Purpose: Software Sales
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;	//Input/Output Library under standard namespace

//User Libraries

//Global Constants
const short UVALUE = 99;

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    short units;
    float dscnt;
    float total;
    
    //Prompt user for input
    cout << setw(38) << "* Software Sales *\n";
    cout << setw(38) << "------------------\n";
    cout << "Thank you for choosing \"Orange Software Inc.\" to fulfill your\n"
            "startup's software needs!\n";
    cout << "\nPlease enter the quantity of premium packages you would like to"
            " order: ";
    
    //Validate input
    while (!(cin >> units) || (units < 0))
    {
        cout << "\nPlease enter a nonnegative number: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }

    //Calculate and determine output
    cout << setprecision(2) << fixed;
    cout << "\n";
    if ((units >= 1e1) && (units <= 1.9e1))
    {
        dscnt = 0.2 * units * UVALUE;
        total = units * UVALUE - dscnt;
        cout << "Excellent! Your batch order qualifies for a 20% discount!\n"
                "The total cost of your purchase is $" << total << endl;
    }
    else if ((units >= 2e1) && (units <= 4.9e1))
    {
        dscnt = 0.3 * units * UVALUE;
        total = units * UVALUE - dscnt;
        cout << "Excellent! Your batch order qualifies for a 30% discount!\n"
                "The total cost of your purchase is $" << total << endl;
    }
    else if ((units >= 5e1) && (units <= 9.9e1))
    {
        dscnt = 0.4 * units * UVALUE;
        total = units * UVALUE - dscnt;
        cout << "Excellent! Your batch order qualifies for a 40% discount!\n"
                "The total cost of your purchase is $" << total << endl;
    }
    else if (units >= 1e2)
    {
        dscnt = 0.5 * units * UVALUE;
        total = units * UVALUE - dscnt;
        cout << "Excellent! Your batch order qualifies for a 50% discount!\n"
                "The total cost of your purchase is $" << total << endl;
    }
    else
    {
        total = units * UVALUE;
        cout << "Excellent!\n"
                "The total cost of your purchase is $" << total << endl;
    }
      
    //Exit Program
    return 0;
}