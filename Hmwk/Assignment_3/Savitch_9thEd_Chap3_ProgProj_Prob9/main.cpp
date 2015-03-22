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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    unsigned int car, cPrize1, cPrize2, choice;
    
    srand(time(0));     //Seed the Random Number Generator
    
    //Generate Random Numbers
    car = (rand()%6) + 1;
    cPrize1 = (rand()%6) + 1;
    cPrize2 = (rand()%6) + 1;
    choice = (rand()%6) + 1;
    
    cout << car << endl;
    cout << cPrize1 << endl;
    cout << cPrize2 << endl;
    cout << choice << endl;
    
    
    //Exit Stage Right!
    return 0;
}