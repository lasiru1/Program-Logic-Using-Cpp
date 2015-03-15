/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 14, 2015, 7:44 PM
 * Purpose: How many pizzas?
 */

//System Libraries
#include <iostream>     //I/O Library
#include <cmath>        //Math Library
#include <iomanip>      //Parametric Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants
const double PI=3.1415926535897932e0;
const float SLCAREA=1.4125e1;
const float GUESTS=4e0;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    unsigned short people, diamtr;
    float radius, pzaArea, slices, pizzas;
    
    //Prompt User for Inputs
    cout<<setw(36)<<"How many pizzas do you need?"<<endl;
    cout<<setw(36)<<"----------------------------"<<endl;
    cout<<"Enter the number of guests attending the party:"<<endl;
    cin>>people;
    cout<<"Enter the diameter of pizzas to be ordered:"<<endl;
    cin>>diamtr;
    
    //Calculate
    radius=static_cast<float>(diamtr)/2;    //The radius of the pizza
    pzaArea=PI*pow(radius, 2);              //The Area of the pizza    
    slices=pzaArea/(SLCAREA);               //The possible amount of slices
    pizzas=people*GUESTS/slices;            //The number of pizzas needed
            
    //Output the Results
    cout<<setprecision(1)<<fixed;
    cout<<"\nYou will have to purchase "<<pizzas<<" pizzas."<<endl;      
    
    //Exit Stage Right!
    return 0;
}