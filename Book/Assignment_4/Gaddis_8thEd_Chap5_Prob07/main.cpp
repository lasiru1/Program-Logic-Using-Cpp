//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 7, 2015, 11:59 AM
//==========================================================================
//Purpose: Pennies for Pay
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    int nDays;
    double salary, total;

    //prompt user for input & validate
    cout << setw(39) << "* Pennies for Pay *\n";
    cout << setw(39) << "-------------------\n";
    cout << "Due to the new \"Penny Act\" proposed by the US Federal Government"
            ",\nyour salary will start out at 1 penny, and double for each day"
            "\nworked. This program will display your payment schedule.\n";
    cout << "\nPlease enter the number of days you plan to work: ";
    while (!(cin >> nDays) || (nDays < 0))
    {
        cout << "\nERROR: Days worked must be a nonnegative number: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    cout << "\n";
    cout << setw(39) << "Day        Salary \n";
    cout << setw(39) << "---       --------\n";
    
    //Initialize "salary" and "total"
    salary = 0.01, total = 0;
       
    //Loop the number of days
    for (int i = 1; i <= nDays; i++)
    {   
        cout << setprecision(2) << fixed;
        cout << setw(22) << i << setw(10) << "$" << salary << endl;
        
        //Add all payments
        total += salary;
        
        //Double the salary each day
        salary *= 2;
    }
    
    //Output the total pay
    cout << "\nYour total amount earned over " << nDays << " days will be: $" 
         << total << endl;
    
    //Exit Program
    return 0;
}