//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: March 22, 2015, 10:32 AM
//========================================
//Purpose: The Monty Hall Game Show Problem
//========================================

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <cstdlib>      //Gerneral Utilities Library
#include <ctime>        //Date and Time Library
using namespace std;    //I/O Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins
int main(int argc, char** argv)
{
    //Declare Variables
    int car, cnPrize;
    int choiceA, choiceB;
    int change;
    int tallyA, tallyB;

    //Seed the random number generator
    srand(time(0));
    
    //Initialize variables
    tallyA = 0, tallyB = 0;
    
    //Simulate the program 10,000 times
    for (int smulatn = 1; smulatn <= 10000; smulatn++)
    {
        //Randomly select a door
        choiceA = (rand() % 3) + 1;
       
        //Randomly select location for the Car
        car = (rand() % 3) + 1;
 
        //Make the revealed door a consolation prize
        //cnPrize cannot be the same number as the car or choiceA
        do
        {    
            cnPrize = (rand() % 3) + 1;
        } while (cnPrize == car || cnPrize == choiceA);
        
        //Make the remaining door a possible car
        //choiceB cannot be the same number as the consolation prize of choiceA
        do
        {    
            choiceB = (rand() % 3) + 1;
        } while (choiceB == cnPrize || choiceB == choiceA);
        
        //Randomly choose to stick with the original choice or switch choices
        //choiceB = 1 or 2. 1 -> stay, else, -> switch.
        change = (rand() % 2) + 1;
        
        //Determine whether sticking with the original choice wins the car
        //or whether switching choices wins the car
        if (change == 1)
        {
            if (choiceA == car)
            {
                tallyA++;
            }
        }
        else
        {
            choiceA = choiceB;
            if (choiceB == car)
            {
                tallyB++;
            }
        }
    }

    //Output the Results
    cout << "Wins = " << tallyA << endl;
    cout << "Losses = " << tallyB << endl;  


    //Exit program
    return 0;
}