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
    unsigned short door1, door2, door3, choice;
    
    //Get the system time
    unsigned int seed=time(0);
    
    //Seed the Random Number Generator
    srand(seed);
    
    //Generate Random Numbers
    door1 = 1 + rand()%3;
    door2 = 1 + rand()%3;
    door3 = 1 + rand()%3;
    
    cout << door1 << endl;
    cout << door2 << endl;
    cout << door3 << endl;
    
    
    //Exit Stage Right!
    return 0;
}