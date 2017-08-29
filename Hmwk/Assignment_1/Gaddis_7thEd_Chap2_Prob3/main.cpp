/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 4, 2015, 7:51 PM
 * Purpose: 4th Homework Problem (Sales Tax)
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
    float prchse, tTax, tPrchse;
    unsigned char sTax, cTax;
    //Input Assigned Values
    prchse=5.2e1;//Purchase Amount
    sTax=4e0;//The State Sales Tax is 4%
    cTax=2e0;//The Country Sales Tax is 2%
    tTax=prchse/static_cast<float>(CNVPCNT)*(sTax+cTax);//Total Sales Tax
    tPrchse=prchse+tTax;//Total Purchase Amount
    //Output Everything
    cout<<"Total Sales Tax Calculator"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Purchase Amount = $"<<prchse<<endl;
    cout<<"State Sales Tax = "
            <<static_cast<float>(sTax)<<"%"<<endl;
    cout<<"Country Sales Tax = "
            <<static_cast<float>(cTax)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Total Purchase Amount = $"<<tPrchse<<endl;
    cout<<"Total Sales Tax = $"<<tTax<<endl;
    //Exit Stage Right!
    return 0;
}