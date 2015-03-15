/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 14, 2015, 9:41 PM
 * Purpose: Monthly Payments
 */

//System Libraries
#include <iostream>     //I/O Library
#include <cmath>        //Math Library
#include <iomanip>       //Parametric Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants TEMP=(pow(1+monRate), paymnts);
unsigned char CNVPCNT=1e2;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    float annRate, monRate, intrst, temp,
          loanAmt, tPayAmt, monPymt;
    unsigned short paymnts;
    
    //Prompt User for Inputs
    cout<<setw(36)<<"Monthly Payment Calculator"<<endl;
    cout<<setw(36)<<"--------------------------"<<endl;
    cout<<"\nWhat is the total amount borrowed? (No Commas)"<<endl;
    cin>>loanAmt;
    cout<<"What will be the total number of payments?"<<endl;
    cin>>paymnts;
    cout<<"What is the annual interest rate? (Percent)"<<endl;
    cin>>annRate;

    //Calculate
    monRate=(annRate/12)/static_cast<float>(CNVPCNT);
    temp=pow((1+monRate), paymnts);
    monPymt=monRate*temp*loanAmt/(temp-1);
    tPayAmt=monPymt*paymnts;
    intrst=tPayAmt-loanAmt;
    
    //Output the Results
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Loan Amount:\t\t$"<<setw(10)<<loanAmt<<endl;
    cout<<"Monthly Interest Rate:\t"<<setw(10)<<monRate*1e2<<"%"<<endl;
    cout<<"Number of Payments:\t"<<setw(10)<<paymnts<<endl;
    cout<<"Monthly Payment:\t$"<<setw(10)<<monPymt<<endl;
    cout<<"Amount Paid Back:\t$"<<setw(10)<<tPayAmt<<endl;
    cout<<"Interest Paid:\t\t$"<<setw(10)<<intrst<<endl;
    
    //Exit Stage Right!
    return 0;
}