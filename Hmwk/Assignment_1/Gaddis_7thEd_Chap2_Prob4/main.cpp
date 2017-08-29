/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 6, 2015, 1:08 PM 
 * Purpose: 5th Homework Problem (Restaurant Bill)
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library under Standard Namespace

//User Libraries

//Global Constants
unsigned char CNVPCNT=1e2;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mlChrge, taxAmnt, tipAmnt, sTotal, gTotal;
    float tax, tip;
    //Input Assigned Values
    mlChrge=4.450e1;//Amount Charged for the Meal
    tax=6.75e0;//The tax rate at 6.75%
    tip=1.5e1;//The tip rate at 15%
    //Process/Calculate
    taxAmnt=mlChrge/static_cast<float>(CNVPCNT)*tax;//The Amount of Tax Paid
    sTotal=mlChrge+taxAmnt;//The Subtotal of the Restaurant Bill
    tipAmnt=sTotal/static_cast<float>(CNVPCNT)*tip;//The Amount of Tip Paid
    gTotal=sTotal+tipAmnt;//The Grand Total of the Restaurant Bill
    //Output Everything!
    cout<<"* Restaurant Bill Calculator *"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Meal = $"<<mlChrge<<endl;
    cout<<"Tax Rate = "
            <<static_cast<float>(tax)<<"%"<<endl;
    cout<<"Tip Rate = "
            <<static_cast<float>(tip)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Tax = $"<<taxAmnt<<endl;
    cout<<"Tip = $"<<tipAmnt<<endl;
    cout<<"Subtotal = $"<<sTotal<<endl;
    cout<<"Grand Total = $"<<gTotal<<endl;
    //Exit Stage Right!
    return 0;
}