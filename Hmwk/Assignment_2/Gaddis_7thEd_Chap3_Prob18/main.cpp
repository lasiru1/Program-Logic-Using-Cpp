/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 14, 2015, 5:03 PM
 * Purpose: Pizza Pi
 */

//System Libraries
#include <iostream>     //I/O Library
#include <cmath>        //Math Library
#include <iomanip>      //Parametric Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants
const float PI=3.141593e0;
const float SLCAREA=1.4125e1;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    unsigned short diamtr;
    float radius, pzaArea, slices;
    
    //Prompt User for Inputs
    cout<<setw(36)<<"Pizza Slice Calculator"<<endl;
    cout<<setw(36)<<"----------------------"<<endl;
    cout<<"Enter the diameter of the pizza to the nearest inch:\n"<<endl;
    cin>>diamtr;
    
    //Calculate
    radius=static_cast<float>(diamtr)/2;    //The radius of the pizza
    pzaArea=PI*pow(radius, 2);              //The Area of the pizza    
    slices=pzaArea/(SLCAREA);               //The possible amount of slices
    
    //Output the Results
    cout<<setprecision(0)<<fixed;
    cout<<"\nThe pizza can be divided into "<<slices<<" slices."<<endl;      
    
    //Exit Stage Right!
    return 0;
}