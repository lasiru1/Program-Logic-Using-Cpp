/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 14, 2015, 10:26 AM
 * Purpose: Angle Calculator
 */

//System Libraries
#include <iostream>     //I/O Library
#include <cmath>        //Math Library
#include <iomanip>      //Parametric Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    float angle, sAngle, cAngle, tAngle;
    
    //Prompt User for Input
    cout<<"This program calculates the sine, cosine, and tangent "
          "of an angle.\n"
          "What is the angle in radians?"<<endl;
    cin>>angle;
    
    //Calculate
    sAngle=sin(angle);  //The sine of the angle
    cAngle=cos(angle);  //The Cosine of the angle
    tAngle=tan(angle);  //The Tangent of the angle
        
    //Output the Results
    cout<<setprecision(4)<<fixed;
    cout<<"\nSine    ="<<setw(8)<<sAngle<<endl;
    cout<<"Cosine  ="<<setw(8)<<cAngle<<endl;
    cout<<"Tangent ="<<setw(8)<<tAngle<<endl;
    
    //Exit Stage Right!
    return 0;
}