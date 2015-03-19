/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 18, 2015, 9:31 AM
 * Purpose: How much water can a private well hold?
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <cmath>        //Math Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants
const double PI = 3.141592653589793e0;    //Ratio of circumference to diameter
const float CNVINFT = 1.2e1;              //Convert feet into inches
const float CNVFTGL = 7.48e0;             //Convert cubic feet into gallons

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    float radius, radiFt, height, wVolume, gallons;
    
    //Prompt User for Inputs
    cout << setw(35) << "Private Water Well Calculator\n";
    cout << setw(35) << "-----------------------------\n";
    cout << "Enter the radius of the well casing in inches: ";
    cin >> radius;
    cout << "Enter the height of the well in feet: ";
    cin >> height;
    cin.ignore();
    cout << endl;
    
    //Calculate Volume
    radiFt = radius / CNVINFT;                  //Convert the radius to feet
    wVolume = PI * pow(radiFt, 2) * height;     //Volume of a cylinder = pi*r^2h
    gallons = wVolume * CNVFTGL + 0.5;          //1 cubic foot = 7.48 gallons (Round up)
   
    //Output Results
    cout << setprecision(0) << fixed;
    cout << "The well casing can hold approximately "
         << gallons << " gallons of water." << endl;
    cout << "\nPress the Enter key to exit... ";
    
    //Exit Stage Right!
    cin.get();
    return 0;
}