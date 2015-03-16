/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 15, 2015, 7:43 PM
 * Purpose: Box Office
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <string>       //String Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants
const float THTRCUT = (2e1 / 1e2);    //Theater keeps 20% of gross box office
const float ADPRICE = 6e0;            //Adult ticket prices are $6.00
const float CHPRICE = 3e0;            //Child ticket prices are $3.00

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    string movie;
    float aTix, cTix;
    float gProfit, nProfit, dstrbtr;
    
    //Prompt User for Input
    cout << setw(40) << "Box Office Calculator\n";
    cout << setw(40) << "---------------------\n";
    cout << "Enter Movie Title:" << endl;
    getline(cin, movie);
    cout << "Enter adult tickets sold:" << endl;
    cin >> aTix;
    cout << "Enter child tickets sold:" << endl;
    cin >> cTix;
    cin.ignore();
    
    //Calculate
    gProfit = (aTix * ADPRICE) + (cTix * CHPRICE);  //Gross Box Office Profit
    nProfit = gProfit * THTRCUT;                    //Net Box Office Profit
    dstrbtr = gProfit - nProfit;                    //Amount sent to Distributor
    
    //Output Report
    cout << "\n";
    cout << left << setw(40) <<
            "Movie Name:" << "\"" << movie << "\"" << endl;
    cout << left << setw(40) <<
            "Adult Tickets Sold:" << right << setw(6) << aTix << endl;
    cout << left << setw(40) <<
            "Child Tickets Sold:" << right << setw(6) << cTix << endl;
    cout << setprecision(2) << fixed;
    cout << left << setw(40) <<
            "Gross Box Office Profit:" << "$" << gProfit << endl;
    cout << left << setw(40) <<
            "Net Box Office Profit:" <<  "$" << nProfit << endl;
    cout << left << setw(40) <<
            "Amount Paid to Distributor:" << "$" << dstrbtr << endl;
    cout << "\nPress the Enter key to exit...";
    cin.get();
    
    //Exit Stage Right!
    return 0;
}