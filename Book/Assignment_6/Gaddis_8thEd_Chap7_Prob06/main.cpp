//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: May 23, 2015, 2:22 AM
//==========================================================================
//Purpose: larger than "n"
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <ctime>        //Time Library
#include <cstdlib>      //Utilites Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const int SIZE = 10;

//Function Prototypes
void larger(int[], int, int);

//Execution begins
int main()
{   
    //Set the random number seed
    srand(time(0));
       
    //Declare variables
    int n;
    int temp;
    int array[SIZE];
    
    //Output program title
    cout << setw(20) << "Larger than \"n\"" << endl;
    cout << setw(20) << "-----------------" << endl;
    
    //Fill the array
    for(int i = 0; i < SIZE; i++)
    {
        temp = (rand() % 100) + 1;
        array[i] = temp;
    }
    
    //Prompt user for input
    cout << "Please enter a number \"n\": ";
    cin >> n;
    cout << endl;
    
    //Write to the "larger" function
    larger(array, SIZE, n);
    
    //Exit the program
    return 0;
}

//(larger function)
void larger(int numbers[], int size, int n)
{    
    
    //Cycle through the array to find numbers greater than "n"
    cout << "Numbers larger than \"n\":" << endl;
    for(int j = 0; j < size; j++)
    {
        if(numbers[j] > n)
        {
            cout << numbers[j] << endl;
        }
    }
}