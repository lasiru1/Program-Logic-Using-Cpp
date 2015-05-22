//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: May 21, 2015, 11:47 AM
//==========================================================================
//Purpose: Homework Assignment 6 - 10 problems utilizing Arrays
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard namespace

//User Libraries

//Global Constants

//Function Prototypes
void lrg_sml();

//Execution begins
int main()
{ 
    //Declare variables
    char choice, another;
    
    //Repeat the program
    do
    {
    
        //Output title
        cout << setw(25) << "CSC5 Assignment #6" << endl;
        cout << setw(25) << " by Uriel Salazar " << endl;
        cout << setw(25) << "------------------" << endl << endl;

        //Output Menu
        cout << "A. \"Largest/Smallest Array Values\"" << endl;
        cout << "\nPress any other key to exit the program" << endl;

        //Prompt the user for input
        cout << "\nWhich problem would you like to solve? ";
        cin >> choice;
        cin.ignore();
        cout << endl;

        switch(choice)
        {
            case 'A' : case 'a' :
                lrg_sml();
                break;
            default:
                cout << "Thank you for using this program!" << endl;
                return 0;
        };
        
        //Prompt the user for another solution
        cout << "\nWould you like to solve another problem? ";
        cin >> another;
        cout << endl;
        
    //Condition for repeating the loop    
    } while(another == 'Y' || another == 'y');
    
    //Exit with prompt
    if(another != 'Y' || another != 'y')
    {
        cout << "Thank you for using this program!" << endl;
    }

    //Exit the program
    return 0;
}

/********************* Largest/Smallest Array Values **************************/
//Global Constants
const unsigned short T_VALS = 10;       //The total number of values

//Function Prototypes
void getVals(float[], unsigned short);
float largest(const float[], unsigned short);
float smalest(const float[], unsigned short);

//Execution begins
void lrg_sml()
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