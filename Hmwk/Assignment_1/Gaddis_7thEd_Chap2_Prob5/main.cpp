/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 6, 2015, 6:28 PM
 * Purpose: 6th Homework Problem (Average of Values)
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library under Standard Namespace

//User Libraries

//Global Constants
unsigned char CNVAVE=5e0;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a, b, c, d, e;
    float sum, average;
    //Input Assigned Values
    a=2.8e1;//Value "a"
    b=3.2e1;//Value "b"
    c=3.7e1;//Value "c"
    d=2.4e1;//Value "d"
    e=3.3e1;//Value "e"
    //Process/Calculate
    sum=(a+b+c+d+e);//Sum of all Values
    average=sum/static_cast<float>(CNVAVE);//Average of all Values
    //Output Everything!
    cout<<"* Average of Values *"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Value \"a\" = "<<a<<endl;
    cout<<"Value \"b\" = "<<b<<endl;
    cout<<"Value \"c\" = "<<c<<endl;
    cout<<"Value \"d\" = "<<d<<endl;
    cout<<"Value \"e\" = "<<e<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<average<<endl;
    //Exit Stage Right!
    return 0;
}