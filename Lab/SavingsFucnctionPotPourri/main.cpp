//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 20, 2015, 8:14 PM
//==========================================================================
//Purpose: Functions
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes
float save1(float, float, int);         //Power Function
float save2(float, float, int);         //Exponential & Log Function
float save3(float, float, int);         //For-Loop
float save4(float, float, int);         //Recursive -> Calling itself
float save5(float = 100.0f, float = 0.08f, int = 9);     //Defaulted Parameter
void save6(float, float, int);
void save7(float, float, int);
float save1(float, float, float);

//Execution Begins
int main()
{
    //Declare Variables
    float pv = 100.0f;  //Present Value$'s
    float ir = 0.08f;   //Interest Rate % / yr
    int nC = 9;         //Number of Compounding Periods
    
    //Output the Inputs
    cout << setprecision(2) << showpoint;
    cout << "Present Value = $ " << pv <<endl;
    cout << "Interest Rate = " << ir * 100 << "%" << endl;
    cout << "Number of Compounding Periods = " << nC << "(yrs)";
    
    //Calculate our savings
    cout << "Savings Function 1 = $" << save1(pv, ir, nC) << endl;
    float nCf = nc;
    cout << "Savings Function 2 = $" << save2(pv, ir, nC) << endl;
    cout << "Savings Function 3 = $" << save3(pv, ir, nC) << endl;
    cout << "Savings Function 4 = $" << save4(pv, ir, nC) << endl;
    cout << "Savings Function 5 = $" << save5(pv, ir, nC) << endl;
    cout << "Savings Function 5 = $" << save5(pv, ir) << endl;
    cout << "Savings Function 5 = $" << save5(pv) << endl;
    cout << "Savings Function 5 = $" << save5(pv, ir) << endl;
    float fv;
    save6(fv, pv, ir, nC);
    cout << "Savings Function 6 = $" << fv << endl;
    save7 ()

    //Exit Program
    return 0;
}

//Function for Future Value Calculation
//inputs
//      p -> Present Value $'s
//      i -> Interest Rate % / Compounding Period
//      n -> Compounding Period yr's
//output
//      fv -> Future Value $'s
float save1(float p, float i, int n);
{
    return p * pow((1 + i), n);
}

float save2(float p, float i, int n);
{
    return p * pow((1 + i), n);
}

float save3(float p, float i, int n);
{
    return p * pow((1 + i), n);
}

float save4(float p, float i, int n);
{
    return p * pow((1 + i), n);
}

float save5(float p, float i, int n);
{
    return p * pow((1 + i), n);
}


float save6(float p, float i, int n)
{
    if(n <= 0)
    {
        return p;                               //1st return
    }
    return save4(p, i, n - 1) * (1 + i);        //2nd Return
}

float save6(float %f, floatp, )