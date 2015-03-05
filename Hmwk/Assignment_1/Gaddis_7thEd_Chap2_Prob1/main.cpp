/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 5, 2015, 2:10 PM
 * Purpose: 5th Homework Problem (Sum of Two Numbers)
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short fVal, sVal, total;
    //Input Assigned Values
    fVal=6.2e1;//First Value
    sVal=9.9e1;//Second Value
    total=fVal+sVal;//The Sum of the two Values
    //Output Everything
    cout<<"The Sum of Two Numbers"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"First Value = "<<fVal<<endl;
    cout<<"Second Value = "<<sVal<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"The Sum of the Two Values = "<<total<<endl;
    //Exit Stage Right!
    return 0;
}