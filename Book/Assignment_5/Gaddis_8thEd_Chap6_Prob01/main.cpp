//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 23, 2015, 7:03 PM
//==========================================================================
//Purpose: Markup
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const float CNVPCNT = 100;              //Convert percentages

//Function Prototypes
float clctRtl(float w, float m);        //Markup function

//Execution Begins
int main()
{
    //Declare variables
    float whslCst;      //Wholesale cost
    float mrkPcnt;      //Markup percentage
    float rtPrice;      //Retail Price
    
    //Prompt user for input
    cout << setw(30) << "* Markup *\n";
    cout << setw(30) << "----------\n";
    cout << "This program calculates an item's retail price." << endl;
    cout << "Enter the wholesale cost: ";
    cin >> whslCst;
    while(whslCst < 0)
    {
        cout << "ERROR: Wholesale cost must be a nonnegative number.\n"
                "Re-enter the wholesale cost: ";
        cin >> whslCst;
    }
    cout << "Enter the markup percentage: ";
    cin >> mrkPcnt;
    while(mrkPcnt < 0)
    {
        cout << "ERROR: Markup percentage must be a nonnegative number.\n"
                "Re-enter the markup percentage: ";
        cin >> mrkPcnt;
    }
    
    //Calculate
    rtPrice = clctRtl(whslCst, mrkPcnt);
    
    //Output the results
    cout << setprecision(2) << fixed;
    cout << "\nThe retail price is: $" << rtPrice << endl;

    //Exit the program
    return 0;
}

float clctRtl(float w, float m)
{
    //Declare variables
    float temp, total;
    
    //Calculate
    temp = m / CNVPCNT * w;
    total = temp + w;
    
    //Output
    return (total);
}