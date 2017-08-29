//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 29, 2015, 9:39 PM
//==========================================================================
//Purpose: Check out dice statistics
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
unsigned char roll(unsigned char, unsigned char);


//Execution begins
int main()
{
    //Declare variables
    const int SIZE = 15;        //Size larger than needed
    int freq[SIZE] = {};        //Setting whole array to zero
    int nThrows = 36000;        //Number of throws
    int sum = 0;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Loop, throw the dice and take the stats!
    for(int throws = 1; throws < nThrows; throws++)
    {
        freq[roll(2, 6)]++;
    }

    //Print the results
    for(int value = 1; value < SIZE; value++)
    {
        sum += freq[value];
        cout << value << " was thrown " << freq[value] << " times!" << endl;    
    }
    cout << endl;
    cout << "The dice were thrown " << nThrows << " times." << endl;
        
    //Exit the program
    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides)
{
    //Declare & Initialize variables
    unsigned char sum = 0;
    for(int die = 1; die <= nDie; die++)
    {
        sum += (rand() % sides + 1);
    }
    return sum;
}