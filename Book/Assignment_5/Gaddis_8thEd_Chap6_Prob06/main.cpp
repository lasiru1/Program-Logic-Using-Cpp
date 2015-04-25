//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 25, 2015, 12:23 PM
//==========================================================================
//Purpose: Kinetic Energy
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes
float kEnergy(float, float);    //Kinetic Energy Function

//Execution begins
int main()
{
    //Declare variables
    float mass;         //Mass in kilograms
    float vlcty;        //Velocity in meters per second
    float kinNrgy;      //Kinetic energy in newtons

    //Prompt the user for input
    cout << setw(36) << "* Kinetic Energy *\n";
    cout << setw(36) << "------------------\n";
    cout << "This program calculates a moving object's kinetic energy.\n\n";
    cout << "Enter the mass of the object in kilograms: ";
    cin >> mass;
    cout << "Enter the velocity of the object in meters per second: ";
    cin >> vlcty;
    cout << endl;
    
    //Call the kinetic energy function
    kinNrgy = kEnergy(mass, vlcty);
    
    //Output the results
    cout << "The total kinetic energy of the object is: " << kinNrgy <<
            " newtons" << endl;

    //Exit the program
    return 0;
}

float kEnergy(float mass, float vlcty)
{
    //Declare variables
    float total;
    
    //Calculate
    total = (0.5) * mass * (vlcty * vlcty);
    
    //Return the value
    return(total);
}