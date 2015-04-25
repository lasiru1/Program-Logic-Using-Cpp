//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 25, 2015, 10:42 AM
//==========================================================================
//Purpose: Winning Division
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes
float gtSales(string);
void highest(float, float, float, float);

//Execution Begins
int main()
{
    //Declare Variables
    float nEast;
    float sEast;
    float nWest;
    float sWest;
    
    //Output title
    cout << setw(37) << "* Winning Division *\n";
    cout << setw(37) << "--------------------\n";
    cout << "This program calculates which division of a company had the"
            "\ngreatest sales this quarter.\n";

    //Obtain Sales for each division
    for(int i = 1; i <= 4; i++)
    {
        switch(i)
        {
            case 1:
               nEast = gtSales("Northeast");
               break;
            case 2:
               sEast = gtSales("Southeast");
               break;
            case 3:
               nWest = gtSales("Northwest");
               break;
            case 4:
               sWest = gtSales("Southwest");
               break;
        }  
    }
    highest(nEast, sEast, nWest, sWest);

    //Exit the program
    return 0;
}

float gtSales(string name)
{
    //Declare variables
    float sales;
    
    //Prompt user for input
    cout << "Enter the " << name << " division's total sales this quarter: ";
    cin >> sales;
    
    //Validate Input
    while(sales < 0)
    {
        cout << "\nERROR: Total sales must be a nonnegative number.\n"
                "Re-enter the total sales: ";
        cin >> sales;
    }   
    
    //Return the value
    return (sales);
}

void highest(float nEast, float sEast, float nWest, float sWest)
{   
    //Find the division with the highest sales
    cout << endl;
    cout << setprecision(2) << fixed;
    if(nEast > sEast && nEast > nWest && nEast > sWest)
    {
        cout << "Northeast Division: $" << nEast << endl;
    }
    else if(sEast > nEast && sEast > nWest && sEast > sWest)
    {
        cout << "Southeast Division: $" << sEast; 
    }
    else if(nWest > nEast && nWest > sEast && nWest > sWest)
    {
        cout << "Northwest Division: $" << nWest; 
    }
    else
    {
        cout << "Southwest Division: $" << sWest; 
    }
}