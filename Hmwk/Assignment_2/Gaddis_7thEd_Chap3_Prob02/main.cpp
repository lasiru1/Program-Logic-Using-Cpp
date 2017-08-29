/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 15, 2015, 11:48 AM
 * Purpose: Stadium Seating
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
    unsigned int aTix, bTix, cTix;
    float total;
    
    //Prompt User for Inputs
    cout<<setw(31)<<"Stadium Income Calculator"<<endl;
    cout<<setw(31)<<"-------------------------"<<endl;
    cout<<setw(33)<<"(Input values without commas)"<<endl;
    cout<<"\nEnter the number of \"Class A\" tickets sold:"<<endl;
    cin>>aTix;
    cout<<"Enter the number of \"Class B\" tickets sold:"<<endl;
    cin>>bTix;
    cout<<"Enter the number of \"Class C\" tickets sold:"<<endl;
    cin>>cTix;
    
    //Calculate
    total=(1.5e1*aTix)+(1.2e1*bTix)+(9e0*cTix);    //Sum of tickets multiplied
                                                   //by their price
    
    //Output Results
    cout<<setprecision(2)<<fixed;
    cout<<"\nTotal Stadium Income: $"<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}