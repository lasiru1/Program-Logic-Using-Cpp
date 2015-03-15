/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 15, 2015, 1:30 PM
 * Purpose: Miles Per Gallon
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
    float mGalons, mMiles, mpg;
    
    //Prompt User for Input
    cout<<setw(25)<<"Gas Mileage Calculator"<<endl;
    cout<<setw(25)<<"----------------------"<<endl;
    cout<<"Enter the maximum number of gallons "
          "\nthe vehicle can hold:"<<endl;
    cin>>mGalons;
    cout<<"Enter the maximum number of miles "
          "\nthe vehicle can be driven:"<<endl;
    cin>>mMiles;
    
    //Calculate
    mpg=mMiles/mGalons;    //Miles Per Gallon
    
    //Output the Results
    cout<<setprecision(1)<<fixed;
    cout<<"\nYour vehicle's gas mileage is\n"
        <<mpg<<" miles per gallon."<<endl;
    
    //Exit Stage Right!
    return 0;
}