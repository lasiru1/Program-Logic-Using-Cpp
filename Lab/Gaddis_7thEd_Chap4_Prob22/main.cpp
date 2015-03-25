/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 16, 2015, 8:10 AM
 * Purpose: Paycheck -> Ternary
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Formatting Library
#include <fstream>      //I/O File
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    ofstream out;               //Output the reults to a file
    float vwdHrs;               //Hours viewed (hrs)
    char package;               //Package AaBbCc
    const int SIZE = 40;        //Max size of name = 39 characters
    char name[SIZE];            //
    float bill;                 //Toatl Cable Bill
    
    //Open the file
    out.open("Payroll.dat");
    
    //Prompt
    cout << "How many hours did you view this month? ";
    cin >> vwdHrs;
    cout << "What is your package? (A, B, C) ";
    cin >> package;
    cout << "What is the customer name? ";
    cin.getline(name, SIZE);
    cin.ignore();
    
    
    
    //Calculate the paycheck
    switch (package)
    {
        case 'A' :
        case 'a' : {
            bill = 9.95;
            if (vwdHrs > 10)bill += 2 * (vwdHrs-10);
            break;
        }
        case 'B' :
        case 'b' : {
            bill = 14.95;
            if (vwdHrs > 10)bill += 2 * (vwdHrs-10);
            break;
        }
        case 'C' :
        case 'c' : {
            bill = 19.95;
            if (vwdHrs > 10)bill += 2 * (vwdHrs-10);
            break;
        }
        default: cout << "Wrong Package Chosen" << endl;        
    };
           
    //Output
    out << fixed << setprecision(2) << showpoint;
    out << "Your Cable Bill from CSC5 RCC Programming Class:" << endl;
    out << "Customer Name: " << name << endl;
    out << "Package: " << package <<endl;
    out << "Hours Viewed: " << vwdHrs <<endl;
    out << "Amount Owed: " << bill << endl;
    
    //Close the file
    out.close();
    
    //Exit Stage Right!
    return 0;
}