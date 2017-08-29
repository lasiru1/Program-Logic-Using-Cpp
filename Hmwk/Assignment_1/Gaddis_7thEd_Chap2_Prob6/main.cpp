/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 6, 2015, 9:49 PM
 * Purpose: 7th Homework Problem (Annual Pay)
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
    short payAmnt, payPrds;
    float annPay;
    //Input Assigned Values
    payAmnt=1.7e3;//Amount employee earns each period
    payPrds=2.6e1;//Number of periods employee gets paid per year
    //Process/Calculate
    annPay=payAmnt*payPrds;//Total amount employee gets paid per year
    //Output Everything!
    cout<<"* Annual Pay Rate *"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Employee's Pay Amount = $"<<payAmnt<<endl;
    cout<<"Employee's Annual Pay Rate = "<<payPrds<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Employee's Annual Pay Amount = $"<<annPay<<endl;        
    //Exit Stage Right!
    return 0;
}