//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 27, 2015, 7:58 PM
//==========================================================================
//Purpose: The exponential sequence
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes
float ourExp(float x);
double ourExp(double x);
    

//Execution begins
int main()
{
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const unsigned int MAX = pow(2, 31) - 1;
    //float mx = 0, mn = 4;
    //for(int i = 1; i <= 1000000; i++)
    //{
        float xf = 1.0f * rand() / MAX * 3 + 1;      //(1, 4)
        double xd = 1.0 * rand() / MAX * 3 + 1;      //(1, 4)
        //cout << "x = " << x << endl;
        //if(x > mx)
        //{
        //    mx = x;
        //}
        //if(x < mn)
        //{
        //    mn = x;
        //}
    //}
    //cout << "Max = " << mx << endl;
    //cout << "Min = " << mn << endl;
    
    //Call functions and compare
    float expAprx = ourExp(x);
    float libExp = exp(x);
    float prcnt = (libExp - expAprx) / libExp * 100;
    cout << "exp(" << x << ") = " << libExp << "," << expAprx;
    
    //Call functions and compare
    double expAprx = ourExp(xd);
    double libExp = exp(xd);
    double prcntErd = (libExp - expAprx) / libExp * 100;
    cout << "exp(" << xd << ") = " << libExp << "," << expAprx;
    

    
    //Exit the program
    return 0;
}

float ourExp(float x)
{
    //Declare variables
    float term = 1, exp = 1, tol = x * 1.0e-7;
    for(int nterm = 1; term > tol; nterm++)
    {
        term *= x / nterm;
        exp += term;
    }
    return exp;
}