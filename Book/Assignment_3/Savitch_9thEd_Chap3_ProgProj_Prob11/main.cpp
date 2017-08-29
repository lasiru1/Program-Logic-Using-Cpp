//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: April 1, 2015, 8:00 AM
//========================================
//Purpose: Busted Keypad
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;	//Input/Output Library under standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
{
    //Declare variables
    unsigned short tAbove = 999, tBelow = 0, temp, posSet = 0;
    
    //Prompt user for input
    cout << "Input a temperature from 0 to 999\n";
    cin >> temp;
    
    //Exhaust Possible temperature choices
   for (int t100 = 0; t100 <=9; t100++)
   {
       for (int t10 = 0; t10 <=9; t10++)
       {
           for (int t1 = 0; t1 <=9; t1++)
           {
               if (t100 == 1 || t10 == 1 || t1 == 1) continue;
               if (t100 == 4 || t10 == 4 || t1 == 4) continue;
               if (t100 == 7 || t10 == 7 || t1 == 7) continue;
               posSet++;
               unsigned int tloop = t100 * 100 + t10 * 10 + t1;
               unsigned int tdiffA = tloop - temp;
               unsigned int tdiffB = temp - tloop;
               if ((tdiffA >= 0) && (tdiffA < (tAbove - temp))) tAbove = tloop;
               if ((tdiffB >= 0) && (tdiffB < (temp - tBelow))) tBelow = tloop;
           }
       }
           
   }
    
    //Output the range of temperature settings
    cout << "The temp on the high side = " << tAbove << " degrees" << endl;
    cout << "The temp on the low side = " << tBelow << " degrees" << endl;
    cout << "There are a total of " << posSet << " temperature settings" << endl;
    
    
    
    
    
    
    
    
    //Exit Program
    return 0;
}