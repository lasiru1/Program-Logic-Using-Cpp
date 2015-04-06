/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 27, 2015, 1:45 PM
 * Purpose: Time Calculator
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    float secnds = 0;
    float mSecnds;
    float minutes;
    float hrs;
    float days;
    
    //Promt user for input
    cout << setw(25) << "Second Calculator\n";
    cout << setw(25) << "-----------------\n";
    cout << "Enter any number of seconds: ";
    
    //Validate input
    while (!(cin >> secnds))
    {
        cout << "\nInvalid Input! Please enter a nonnegative number: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    
    //Calculate and determine output
    mSecnds = secnds * 1000;
    minutes = secnds / 60;
    hrs = secnds / 3600;
    days = secnds / 86400;
    cout << setprecision(0) << fixed;
    cout << "\n";
    if (secnds >= 86400)
    {
        cout << secnds << " seconds is approximately " << days << " days.\n";
    }
    else if (secnds >= 3600)
    {
        cout << secnds << " seconds is approximately " << hrs << " hours.\n";
    }
    else if (secnds >= 60)
    {
        cout << secnds << " seconds is approximately " << minutes <<
                          " minutes.\n";
    }
    else
    {
        cout << secnds << " seconds is approximately " << mSecnds <<
                          " milliseconds.\n";
    }
    
    //Exit Stage Right!
    return 0;
}