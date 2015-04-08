//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 6, 2015, 10:17 AM
//==========================================================================
//Purpose: 10 problems utilizing a menu with a do-while loop and a switch
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <string>       //String Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const short MONTHS = 12;

//Function Prototypes
void distance_traveled();
void pennies_for_pay();
void average_rainfall();

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
        cout << setw(25) << "* CSC5 Assignment 4 *\n";
        cout << setw(25) << "---------------------\n";
        cout << "A. \"Distance Traveled\"\n";
        cout << "B. \"Pennies for Pay\"\n";
        cout << "C. \"Average Rainfall\"\n";
        cout << "D. \"Population\"\n";
        cout << "E. \"Sales Bar Chart\"\n";
        cout << "F. \"Random Number Guessing Game\"\n";
        cout << "G. \"Square Display\"\n";
        cout << "H. \"Pattern Displays\"\n";
        cout << "I. \"Gravitational Force\"\n";
        cout << "J. \"Deep-Fried Twinkie Vending Machine\"\n";
        cout << "\nEnter any other key to exit the program.\n\n";
        
        //Prompt for input
        cout << "Which problem would you like to solve? ";
        cin >> choice;        
        
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
            case 'A' : distance_traveled(); break;
            case 'a' : distance_traveled(); break;
            case 'B' : pennies_for_pay();  break;
            case 'b' : pennies_for_pay();  break;
            case 'C' : average_rainfall(); break;
            case 'c' : average_rainfall(); break;
        };
        
       //Prompt for another solution
       cout << "\nWould you like to solve another problem? (Y/N) ";
       cin >> another;
    } while (another == 'Y' || another == 'y');
    if (another != 'Y' || another != 'y')
    {
        cout << "\nGood-bye!" << endl;
    }
    
    //Exit Program
    return 0;
}

//************************** Distance Traveled *******************************//
void distance_traveled()
{
    //Declare Variables
    float vSpeed, hrs, dstance;

    //prompt user for input & validate
     cout << setw(43) << "* Distance Traveled *\n";
     cout << setw(43) << "---------------------\n";
     cout << "This program breaks up a vehicle's journey into intervals based"
             "\non the speed and amount of time traveled.\n";
     cout << "\nPlease enter the speed of the vehicle in miles per hour: ";
     while (!(cin >> vSpeed) || (vSpeed < 0))
     {
         cout << "\nERROR: Speed must be a nonnegative number: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     cout << "\nPlease enter the total time traveled in hours: ";
     while (!(cin >> hrs) || (hrs < 1))
     {
         cout << "\nERROR: Time traveled must be greater than 1 hour: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     cout << "\n";
     cout << setw(43) << "Hour   Distance Traveled\n";
     cout << setw(43) << "----   -----------------\n";
     
     //Loop to break the hours into intervals
     for (int i = 1; i <= hrs; i++)
     {
         //Calculate distance
         dstance = vSpeed * i;
         
         //Output the results
         cout << setw(21) << i << setw(14) << dstance << endl;
     }
     cout << "\n";
}

//************************** Pennies for Pay *******************************//
void pennies_for_pay()
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
    cout << "\n";
}

//************************** Average Rainfall *******************************//
void average_rainfall()
{
    //Declare Variables
    short nYears, nMonths;
    float inches, tRain, aveRain;
    string mNames[MONTHS] =
    {
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"
    };
    
    //prompt user for input & validate
     cout << setw(38) << "* Average Rainfall *\n";
     cout << setw(38) << "--------------------\n";
     cout << "California is currently undergoing the greatest drought in"
             "\nhistory. This program calculates the average rainfall in"
             "\nrecent years. Enter any amount of years before 2015: ";
     while (!(cin >> nYears) || (nYears < 1))
     {
         cout << "\nERROR: You must enter at least one year."
                 "\nRe-enter the amount of years: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     
     //Initialize the total rainfall
     tRain = 0;
     
     //Loop the amount of years and months
     for (int i = 1; i <= nYears; i++)
     {
         cout << "\nYear " << i << ":\n";
         for (int j = 0; j < MONTHS; j++)
         {
             cout << "How many inches of rainfall did it rain in " << mNames[j]
                  << "? ";
             while (!(cin >> inches) || (inches < 0))
             {
                 cout << "\nERROR: Inches must be a positive value."
                         "\nRe-enter the amount of inches: ";
                 cin.clear();
                 cin.ignore(1e9, '\n');
             }
             //Count the total amount of rain 
             tRain += inches;
         } 
     }
     
     //calculate the number of months and the average rainfall
     nMonths = nYears * 12;
     aveRain = tRain / nMonths;
     
     //Output the results
     cout << setprecision(2) << fixed;
     cout << "\n";
     cout << "Number of months: " << nMonths << endl;
     cout << "Total inches of rainfall: " << tRain << endl;
     cout << "California's average rainfall for the past " << nYears <<
             " years: " << aveRain << " in./month." << endl;
     cout << "\n";
}