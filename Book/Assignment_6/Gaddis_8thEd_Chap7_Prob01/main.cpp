//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: May 21, 2015, 11:51 AM
//==========================================================================
//Purpose: Largest / Smallest Array Values
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard namespace

//User Libraries

//Global Constants
const unsigned short T_VALS = 10;       //The total number of values

//Function Prototypes
void getVals(float[], unsigned short);
float largest(const float[], unsigned short);
float smalest(const float[], unsigned short);

//Execution begins
int main()
{
    //Declare variables
    float value[T_VALS];
    float lowVal, larVal;
    
    //Output Program Intro
    cout << setw(33) << "Largest/Smallest Array Values" << endl;
    cout << setw(33) << "-----------------------------" << endl << endl;
    
    //Call the "get value" function to get the 10 values 
    getVals(value, T_VALS);
    
    //Call the "largest" function to get the largest value
    larVal = largest(value, T_VALS);
    
    //Call the "smallest" function to get the lowest value
    lowVal = smalest(value, T_VALS);
    
    //Output the results
    cout << endl;
    cout << "Largest Value: " << setw(5) << larVal << endl;
    cout << "Smallest Value:" << setw(5) << lowVal << endl;

    //Exit the program
    return 0;
}

//(getVals function)
void getVals(float val[], unsigned short size)
{
    //Prompt user for input
    for(int i = 0; i < size; i++)
    {
        cout << "Please enter value #" << (i+1) << ": ";
        cin >> val[i];
    }
}

//(largest function)
float largest(const float val[], unsigned short size)
{
    //Declare variables
    float large;
    
    //Get the first element of the array
    large = val[0];
    
    //Cycle through the array to find the largest value
    for(int f = 1; f < size; f++)
    {
        if(val[f] > large)
        {
            large = val[f];
        }
    }
    
    //Return the largest value
    return(large);
}

//(smalest function)
float smalest(const float val[], unsigned short size)
{
    //Declare variables
    float small;
    
    //Get the first element of the array
    small = val[0];
    
    //Cycle through the array to find the smallest value
    for(int c = 1; c < size; c++)
    {
        if(val[c] < small)
        {
            small = val[c];
        }
    }
    
    //Return the smallest value
    return(small);
}