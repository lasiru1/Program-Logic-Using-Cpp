/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 16, 2015, 8:10 AM
 * Purpose: Internet Service Provider
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
int main()
{
    //Declare Variables
    ofstream out;               //Output the results to a file
    float vwdHrs;               //Hours viewed (hrs)
    char package;               //Package AaBbCc
    const int SIZE = 40;        //Max size of name = 39 characters
    char name[SIZE];            //Customer Name
    float bill;                 //Cable Bill ($s)
    
    //Open the file
    out.open("CableBill.dat");
    
    //Prompt user for inputs
    cout << "How many hours did you view this month? ";
    cin >> vwdHrs;
    cout << "What is your package? (A, B, C) ";
    cin >> package;
    cout << "What is the customer name? ";
    cin.ignore();
    cin.getline(name, SIZE);
   
    //Calculate the paycheck
    switch (package)
    {
        case 'A' :
        case 'a' :
        {
            bill = 9.95;
            if (vwdHrs > 10)
            {
                bill += 2 * (vwdHrs-10);
            }
            break;
        }
        case 'B' :
        case 'b' :
        {
            bill = 14.95;
            if (vwdHrs > 20)
            {
                bill += 2 * (vwdHrs-10);
            }
            break;
        }
        case 'C' :
        case 'c' :
        {
            bill = 19.95;
            break;
        }
        default: cout << "Wrong Package Chosen!" << endl;        
    };
           
    //Output
    cout << fixed << setprecision(2) << showpoint << "\n\n";
    cout << "Your Cable Bill from CSC5 RCC Programming Class:" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Package: " << package <<endl;
    cout << "Hours Viewed: " << vwdHrs <<endl;
    cout << "Amount Owed: $" << bill << endl;
    
    //Output to the file
    out << fixed << setprecision(2) << showpoint;
    out << "Your Cable Bill from CSC5 RCC Programming Class:" << endl;
    out << "Customer Name: " << name << endl;
    out << "Package: " << package <<endl;
    out << "Hours Viewed: " << vwdHrs <<endl;
    out << "Amount Owed: $" << bill << endl;
    
    //Close the file
    out.close();
    
    //Exit Program!
    return 0;
}