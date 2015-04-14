//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 13, 2015, 7:56 PM
//==========================================================================
//Purpose: Gravitational Force
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const float G = 6.673e-8;       //Gravitational constant

//Function Prototypes
float grv_frc(float m1, float m2, float d);

//Execution Begins
int main()
{
    //Declare Variables
    float mass1, mass2;     //The mass of objects 1 & 2
    float dstance;          //The distance between the two objects
    float gForce;           //Gravitational Force
    unsigned char another;  //Character for repeating program

    //Prompt user for input
    cout << setw(39) << "* Gravitational Force *\n";
    cout << setw(39) << "-----------------------\n";
    cout << "This program calculates the gravitational force between two\n"
            "bodies using their mass and the distance between them.\n";
    do
    {
        cout << "\nEnter the mass of the first object in kilograms: ";
        cin >> mass1;
        cout << "\nEnter the mass of the second object in kilograms: ";
        cin >> mass2;
        cout << "\nEnter the distance between the two objects in meters: ";
        cin >> dstance;

        //Calculate
        gForce = grv_frc(mass1, mass2, dstance);

        //Output the results
        cout << "\nBased on the distance of " << dstance << " meters, the\n"
                "gravitational force between a " << mass1 << " kilogram object\n"
                "and a " << mass2 << " kilogram object is approximately:\n\n"
             << gForce << " dynes.";
        cout << endl;
        cout << "\nWould you like to repeat this calculation? (Y/N) ";
        cin >> another;
    } while (another == 'Y' || another == 'y');

    //Exit Program
    return 0;
}

float grv_frc(float m1, float m2, float d)
{
    //Declare variables
    float force;
    
    //Calculate
    force = (G * m1 * m2) / (d * d);
    
    //Output
    return (force);
    
}