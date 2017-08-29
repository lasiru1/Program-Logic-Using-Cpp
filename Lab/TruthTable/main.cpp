/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 18, 2015, 9:37 AM
 * Purpose: Determine if Table created in class agrees with Logic of Computer
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
    bool x, y;
    //Heading
    cout << setw(4) << "x";
    cout << setw(4) << "y";
    cout << setw(5) << "!x";
    cout << setw(5) << "!y";
    cout << setw(7) << "x&&y";
    cout << setw(7) << "x||y";
    cout << setw(5) << "x^y";
    cout << setw(9) << "(x^y)^y";
    cout << setw(9) << "(x^y)^x";
    cout << setw(9) << "!(x&&y)";
    cout << setw(9) << "!x||!y";
    cout << setw(9) << "!(x||y)";
    cout << setw(9) << "!x&&!y" << endl;
    cout << "------------------------------------------------------------------"
            "---------------------------";
    cout << endl;
    
    //Output the first row of the table
    x = true; y = true;
    cout << setw(4) << (x? 'T' : 'F');
    cout << setw(4) << (y? 'T' : 'F');
    cout << setw(5) << (!x? 'T' : 'F');
    cout << setw(5) << (!y? 'T' : 'F');
    cout << setw(6) << (x&&y? 'T' : 'F');
    cout << setw(7) << (x||y? 'T' : 'F');
    cout << setw(5) << (x^y? 'T' : 'F');
    cout << setw(7) << ((x^y)^y? 'T' : 'F');
    cout << setw(9) << ((x^y)^x? 'T' : 'F');
    cout << setw(9) << (!(x&&y)? 'T' : 'F');
    cout << setw(9) << (!x||!y? 'T' : 'F');
    cout << setw(9) << (!(x||y)? 'T' : 'F');
    cout << setw(9) << (!x&&!y? 'T' : 'F');
    cout << endl;
    
    //Output the second row of the table
    x = true; y = false;
    cout << setw(4) << (x? 'T' : 'F');
    cout << setw(4) << (y? 'T' : 'F');
    cout << setw(5) << (!x? 'T' : 'F');
    cout << setw(5) << (!y? 'T' : 'F');
    cout << setw(6) << (x&&y? 'T' : 'F');
    cout << setw(7) << (x||y? 'T' : 'F');
    cout << setw(5) << (x^y? 'T' : 'F');
    cout << setw(7) << ((x^y)^y? 'T' : 'F');
    cout << setw(9) << ((x^y)^x? 'T' : 'F');
    cout << setw(9) << (!(x&&y)? 'T' : 'F');
    cout << setw(9) << (!x||!y? 'T' : 'F');
    cout << setw(9) << (!(x||y)? 'T' : 'F');
    cout << setw(9) << (!x&&!y? 'T' : 'F');
    cout << endl;
    
    //Output the third row of the table
    x = false; y = true;
    cout << setw(4) << (x? 'T' : 'F');
    cout << setw(4) << (y? 'T' : 'F');
    cout << setw(5) << (!x? 'T' : 'F');
    cout << setw(5) << (!y? 'T' : 'F');
    cout << setw(6) << (x&&y? 'T' : 'F');
    cout << setw(7) << (x||y? 'T' : 'F');
    cout << setw(5) << (x^y? 'T' : 'F');
    cout << setw(7) << ((x^y)^y? 'T' : 'F');
    cout << setw(9) << ((x^y)^x? 'T' : 'F');
    cout << setw(9) << (!(x&&y)? 'T' : 'F');
    cout << setw(9) << (!x||!y? 'T' : 'F');
    cout << setw(9) << (!(x||y)? 'T' : 'F');
    cout << setw(9) << (!x&&!y? 'T' : 'F');
    cout << endl;
    
    //Output the fourth row of the table
    x = false; y = false;
    cout << setw(4) << (x? 'T' : 'F');
    cout << setw(4) << (y? 'T' : 'F');
    cout << setw(5) << (!x? 'T' : 'F');
    cout << setw(5) << (!y? 'T' : 'F');
    cout << setw(6) << (x&&y? 'T' : 'F');
    cout << setw(7) << (x||y? 'T' : 'F');
    cout << setw(5) << (x^y? 'T' : 'F');
    cout << setw(7) << ((x^y)^y? 'T' : 'F');
    cout << setw(9) << ((x^y)^x? 'T' : 'F');
    cout << setw(9) << (!(x&&y)? 'T' : 'F');
    cout << setw(9) << (!x||!y? 'T' : 'F');
    cout << setw(9) << (!(x||y)? 'T' : 'F');
    cout << setw(9) << (!x&&!y? 'T' : 'F');
    cout << endl;
 
    //Exit Stage Right!
    return 0;
}