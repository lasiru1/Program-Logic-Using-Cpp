/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 28, 2015, 1:43 PM
 * Purpose: Mass and Weight 
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants
const float G = 9.8e0;

//Function Prototypes

//Execution Begins Here!
int main()
{
    //Declare Variables
    float mass = 0;
    float weight;
    
    //Promt user for input
    cout << setw(38) << "* Weight Calculator *\n";
    cout << setw(38) << "---------------------\n";
    cout << "Due to recent budget cuts, NASA can only launch items with a\n"
            "specific weight.\n";
    cout << "\nEnter the mass of your item in kilograms: ";
    
    //Validate input
    while (!(cin >> mass) || (mass < 0))
    {
        cout << "\nError! Please enter a nonnegative number: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    
    //Calculate and determine output
    weight = mass * G;
    cout << setprecision(1) << fixed;
    cout << "\n";
    if (weight > 1e3)
    {
        cout << "Sorry! Your item weighs " << weight << " newtons, which is\n"
                "too heavy for current space launch regulations.\n";
    }
    else if (weight < 1e1)
    {
         cout << "Sorry! Your item weighs " << weight << " newtons, which is\n"
                 "too light for current space launch regulations.\n";
    }
    else
    {
        cout << "Congratulations! Your item weighs " << weight << " newtons.\n"
                "Your item qualifies for space launch!\n";
    }

    //Exit Stage Right!
    return 0;
}