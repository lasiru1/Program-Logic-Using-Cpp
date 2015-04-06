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
int main()
{
    
    //Seed the random number generator
    srand(time(0));
    

    //Declare Variables
    unsigned int car, cnPrize;
    unsigned int choiceA, choiceB;
    unsigned int tallyA, tallyB;
    char stay;

     //Prompt user for input
    cout << setw(45) << "* The Monty Hall Game Show Problem *\n";
    cout << setw(45) << "------------------------------------\n";
    cout << "You've been selected for a chance to win the grand prize!\n";
    cout << "You will choose one of three doors. Behind one door is a fabulous"
            "\nnew car! While the other two are merely consolation prizes.\n\n"
            "Before we open your door, we will reveal one of the consolation\n"
            "prizes and give you a choice:\n"
            "Change your door, or Stay with the original!\n\n"
            "Enter \"C\" to change your door, or \"S\" to stay with your\n"
            "original choice: ";
    cin >> stay;
    
    //Validate input
    while ((stay != 'C' && stay != 'c' && stay != 'S' && stay != 's'))
    {
        cout << "\nInvalid Input! Enter \"C\" to change your door, or \"S\" to"
                "\nstay with your original choice: ";
        cin >> stay;
    }
    
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
        
        //Change doors when given a choice
        if (stay != 'S' && stay != 's')
        {
            //What is ChoiceB, meaning the door not chosen
            do
            {    
              choiceB = (rand() % 3) + 1;
            } while (choiceB == cnPrize || choiceB == choiceA);
            //When found, swap
            choiceA = choiceB;
        }
        
        //Tally the number of wins and losses
        if (choiceA == car) tallyA++;
        else tallyB++;
    }
    
    //Output the results
    cout << "\n";
    cout << setprecision(1) << fixed;
    cout << setw(36) << "* After 10,000 simulations: *\n";
    cout << setw(36) << "-----------------------------\n";
    if (stay == 'S' || stay == 's')
    {
       cout << "Staying with your original door has a " << 100.0f * tallyA /
               10000 << "%" << " chance of\nwinning the grand prize!\n\n";
       cout << "Changing your door has a " << 100.0f * tallyB / 10000
            << "%" << " chance of winning the\ngrand prize!\n\n"; 
    }
    else
    {
       cout << "Changing your door has a " << 100.0f * tallyA /
               10000 << "%" << " chance of\nwinning the grand prize!\n\n";
       cout << "Staying with your original door has a " << 100.0f * tallyB /
               10000 << "%" << "\nchance of winning the grand prize!\n\n";  
    }

    //Exit program
    return 0;
}