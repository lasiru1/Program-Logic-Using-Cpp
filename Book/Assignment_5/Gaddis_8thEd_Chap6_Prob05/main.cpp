//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 24, 2015, 11:02 PM
//==========================================================================
//Purpose: Falling Distance
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const float G = 9.8;    //Gravitational Constant

//Function Prototypes
float fDistnc(int);     //Falling distance function

//Execution begins
int main()
{
    //Declare variables
    int fTime;        //The amount of time falling in seconds
    float tDistnc;    //Distance in meters
    
    //Display title
    cout << setw(37) << "* Falling Distance *\n";
    cout << setw(37) << "--------------------\n";
    cout << "This program simulates the distance (meters) an object has\n"
            "fallen after ten seconds.\n";
    cout << "\nPress the Enter key to begin the simulation...";
    cin.get();
    cout << endl;
    
    //Loop the function 10 times
    for(fTime = 1; fTime <= 10; fTime++)
    {
        tDistnc = fDistnc(fTime);
        if(fTime == 1)
        {
            cout << fTime << " second: " << tDistnc << " meters" << endl;
        }
        else
        {
          cout << fTime << " seconds: " << tDistnc << " meters" << endl;  
        }
    }

    //Exit the program
    return 0;
}

float fDistnc(int fTime)
{
    //Declare variables
    float total;
    
    //Calculate distance fallen
    total = (0.5) * G * (fTime * fTime);
    
    //Return value to main
    return(total);
}