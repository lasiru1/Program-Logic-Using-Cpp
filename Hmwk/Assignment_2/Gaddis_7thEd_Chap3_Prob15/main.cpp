/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 15, 2015, 10:13 AM
 * Purpose: Math Tutor
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <cstdlib>      //General Utilities Library
#include <ctime>        //Date and Time Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    unsigned short a, b, sum;
    char ch;
    
    //Get the System Time
    unsigned int seed=time(0);
    
    //Seed the Random Number Generator
    srand(seed);
    
    //Generate Random Numbers
    a=1+rand()%900;     //First randomly generated number
    b=1+rand()%900;     //Second randomly generated number
    sum=a+b;            //The sum of the two random numbers
    
    //Display Random Math Problem
    cout<<setw(20)<<"Math Tutor"<<endl;
    cout<<setw(20)<<"----------"<<endl;
    cout<<"Press Enter to view the answer...\n"<<endl;
    cout<<setw(5)<<a<<endl;
    cout<<"+"<<setw(4)<<b<<endl;
    cout<<setw(4)<<"-----   ";
    cin.get(ch);        //Pause the program
    cout<<setw(5)<<sum<<endl;
    
    //Exit Stage Right!
    return 0;
}