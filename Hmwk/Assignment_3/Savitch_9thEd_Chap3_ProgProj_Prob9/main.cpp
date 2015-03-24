/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 22, 2015, 10:32 AM
 * Purpose: The Monty Hall Game Show Problem
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <cstdlib>      //Gerneral Utilities Library
#include <ctime>        //Date and Time Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants
const unsigned short CNVPCNT = 1e2;


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    int car, cPrize1, cPrize2;
    int choiceA, choiceB;
    int tallyA, tallyB;

    //Seed the random number generator
    srand(time(0));
        
    
    //Simulate the program 10,000 times
    for (int smulatn = 1; smulatn <= 10000; smulatn++)
    {
        //Randomly select a door
        choiceA = (rand() % 3) + 1;
       
        //Randomly select location for the Car
        car = (rand() % 3) + 1;
        
        cPrize1 = (rand() % 3) + 1;
        cPrize2 = (rand() % 3) + 1;
        
        //Make the revealed door a consolation prize
        //cPrize1 cannot be the same number as the car or choiceA
        while(cPrize1 == car || cPrize1 == choiceA)
        {
            cPrize1 = (rand() % 3) + 1;
        }

        //Make the reamaing door a consolation prize
        //cPrize2 cannot be the same number as cPrize1 or choiceA
        while(cPrize2 == cPrize1 || cPrize2 == choiceA)
        {
            cPrize2 = (rand() % 3) + 1;
        }

        //Randomly choose to stick with the origial choice or switch choices
        //choiceB = 1 or 2, 1 = stay, 2 = switch
        choiceB = (rand() % 2) + 1;
        
        //Determine if sticking with the original choice wins the car
        if (choiceB == 1)
        {
            if (choiceA == car)
            {
                tallyA++;
            }
        }
        //Determine if switching choices wins the car
        else
        {
            choiceA == cPrize2;
            if (choiceA == car)
            {
                tallyB++;
            }
        }
    }
        
    //Ouput the Results
    cout << tallyA << endl;
    cout << tallyB << endl;
    
    
    
    
    
    
    
    
    
    
    //Exit Stage Right!
    return 0;
}