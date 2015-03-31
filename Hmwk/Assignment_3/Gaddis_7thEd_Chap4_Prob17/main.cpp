//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: March 30, 2015, 9:03 PM
//========================================
//Purpose:
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;	//Input/Output Library under standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    float rWaves, mWaves, infared, vLight, uViolet, xRays;
    float length;
    
    //Input Assigned Values
    rWaves = 1e-2;
    mWaves = 1e-3;
    infared = 7e-7;
    vLight = 4e-7;
    uViolet = 1e-8;
    xRays = 1e-11;
    
    //Promt user for input
    cout << setw(38) << "* Radiation Calculator *\n";
    cout << setw(38) << "------------------------\n";
    cout << "Enter the wavelength of the electromagnetic wave in meters: \n";
    
    //Validate input
    while (!(cin >> length) || (length < 0))
    {
        cout << "\nError! Please enter a nonnegative number: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }

    //Calculate and determine output
    cout << setprecision(6) << fixed;
    cout << "\n";
    if (length >= rWaves)
    {
        cout << "Wavelength: " << length << " m" << endl;;
        cout << "Radiation Type: Radio Waves" << endl;
    }
    else if ((length < rWaves) && (length >= mWaves))
    {
        cout << "Wavelength: " << length << " m"  << endl;
        cout << "Radiation Type: Microwaves" << endl;
    }
    else if ((length < mWaves) && (length >= infared))
    {
        cout << "Wavelength: " << length << " m"  << endl;
        cout << "Radiation Type: Infrared" << endl;
    }
    else if ((length < infared) && (length >= vLight))
    {
        cout << "Wavelength: " << length << " m"  << endl;
        cout << "Radiation Type: Visible Light" << endl;
    }
    else if ((length < vLight) && (length >= uViolet))
    {
        cout << "Wavelength: " << length << " m"  << endl;
        cout << "Radiation Type: Ultraviolet" << endl;
    }
    else if ((length < uViolet) && (length >= xRays))
    {
        cout << "Wavelength: " << length << " m"  << endl;
        cout << "Radiation Type: X Rays" << endl;
    }
    else
    {
        cout << "Wavelength: " << length << " m"  << endl;
        cout << "Radiation Type: Gamma Rays" << endl;
    }

    //Exit Program
    return 0;
}