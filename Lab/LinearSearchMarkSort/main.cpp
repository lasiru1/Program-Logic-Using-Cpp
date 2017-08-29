//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: May 6, 2015, 9:02 PM
//==========================================================================
//Purpose: Example Linear Search/Mark Sort
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <cstdlib>
#include <ctime>
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes
void filAray(int [], int);
void prntAry(int [], int, int);
int search(int [], int, int);
void markSrt(int [], int);




//Execution begins
int main()
{
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE = 
    
    //Print the array
    prntAry(array, SIZE, 10);

    //Exit the program
    return 0;
}

void markSrt(int a[], int n)
{
    for(int pos = 0; pos < n; pos++)
    {
        for(int 1st = pos + 1; 1st)
    }
}

void prntAry(int a[], int n, int perLine)
{
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        if(i%perLine == perLine - 1)
        {
            cout << endl;
        }
    }
    cout << endl;
}

void filAray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = rand() % 90 + 10;        //2 digit numbers
    }
}