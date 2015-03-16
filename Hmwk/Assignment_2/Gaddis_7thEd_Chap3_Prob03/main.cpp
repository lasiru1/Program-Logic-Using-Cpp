/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 15, 2015, 5:41 PM
 * Purpose: Test Average
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
    float a, b, c, d, e, average;
    
    //Prompt User for Inputs
    cout << setw(30) << "Test Average Calculator\n";
    cout << setw(30) << "-----------------------\n";
    cout << "Enter your 1st test score: ";
    cin >> a;
    cout << "Enter your 2nd test score: ";
    cin >> b;
    cout << "Enter your 3rd test score: ";
    cin >> c;
    cout << "Enter your 4th test score: ";
    cin >> d;
    cout << "Enter your 5th test score: ";
    cin >> e;
    
    //Calculate
    average = (a + b + c + d + e)/5;
    
    //Output Results
    cout << "\nYou have a " << average << "%" << " average test score." << endl;

    //Exit Stage Right!
    return 0;
}