/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 25, 2015, 8:33 PM
 * Purpose: Roman Numeral Converter
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    unsigned short number;
    
    //Prompt User for input
    cout << setw(50) << "Roman Numeral Converter\n";
    cout << setw(50) << "-----------------------\n";
    cout << "Enter any number from 1-10 that you would like to convert to a"
            " Roman Numeral: ";
    cin >> number;
    cin.ignore();
    
    //Validate Input and convert the number
    switch (number)
    {
        case 1 :
            cout << "1 = I\n";
            break;
        case 2 :
            cout << "2 = II\n";
            break;
        case 3 :
            cout << "3 = III\n";
            break;
        case 4 :
            cout << "4 = IV\n";
            break;
        case 5 :
            cout << "5 = V\n";
            break;
        case 6 :
            cout << "6 = VI\n";
            break;
        case 7 :
            cout << "7 = VII\n";
            break;
        case 8 :
            cout << "8 = VIII\n";
            break;
        case 9 :
            cout << "9 = IX\n";
            break;
        case 10 :
            cout << "10 = X\n";
            break;
        default :
            cout << "You did not enter a number from 1-10! :(\n";
    }        
    cout << "\nPress the Enter key to exit..." << endl;  
    cin.get();
   
    //Exit Stage Right!
    return 0;
}