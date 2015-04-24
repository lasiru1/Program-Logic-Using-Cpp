//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 20, 2015, 10:31 AM
//==========================================================================
//Purpose: 10 problems utilizing a menu with a do-while loop and a switch
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const float CNVPCNT = 100;              //Convert percentages

//Function Prototypes
void markup();                          //Markup
float clctRtl(float w, float m);        //Markup function
void winDvsn();                         //Winning Division
void sfsDrvg();                         //Safest Driving Area
void flgDist();                         //Falling Distance
void kntcNrg();                         //Kinetic Energy
void tmp_tbl();                         //Celsius Temperature Table
void cnToss();                          //Coin Toss
void prsntVl();                         //Present Value
void vrHsptl();                         //Overloaded Hospital
void rpsGame();                         //Rock, Paper, Scissors Game


//Execution Begins
int main()
{
    //Declare menu variable choice
    char choice, another;
    
    //Repeat the menu
    do
    {
        
        //Display the menu
        cout << setw(25) << " CSC5 Assignment #5 \n";
        cout << setw(25) << "   by Uri Salazar   \n";
        cout << setw(25) << "--------------------\n";
        cout << "A. \"Markup\"\n";
        cout << "B. \"Winning Division\"\n";
        cout << "C. \"Safest Driving Area\"\n";
        cout << "D. \"Falling Distance\"\n";
        cout << "E. \"Kinetic Energy\"\n";
        cout << "F. \"Celsius Temperature Table\"\n";
        cout << "G. \"Coin Toss\"\n";
        cout << "H. \"Present Value\"\n";
        cout << "I. \"Overloaded Hospital\"\n";
        cout << "J. \"Rock, Paper, Scissors Game\"\n";
        cout << "\nEnter any other key to exit the program.\n\n";
        
        //Prompt for input
        cout << "Which problem would you like to solve? ";
        cin >> choice;
        cout << endl;
        
        //Solve a problem that has been chosen
        switch (choice)
        {           
            case 'A' : case 'a' :
                markup(); break;
            /*case 'B' : case 'b' : 
                winDvsn(); break;
            case 'C' : case 'c' : 
                sfsDrvg(); break;
            case 'D' : case 'd' : 
                flgDist(); break;
            case 'E' : case 'e' : 
                kntcNrg(); break;
            case 'F' : case 'f' : 
                tmp_tbl(); break;
            case 'G' : case 'g' :
                cnToss(); break;
            case 'H' : case 'h' : 
                prsntVl(); break;
            case 'I' : case 'i' : 
                vrHsptl(); break;
            case 'J' : case 'j' : 
                rpsGame(); break;
            */default :
                cout << "Thank you for using this program!" << endl;
                return 0;
        };
        
       //Prompt for another solution
       cout << "\nWould you like to solve another problem? (Y/N) ";
       cin >> another;
       cout << endl;
       
    //Condition for exiting the loop
    } while (another == 'Y' || another == 'y');
    
    //Exit with prompt
    if (another != 'Y' || another != 'y')
    {
        cout << "Thank you for using this program!" << endl;
    }
    
    //Exit the program
    return 0;
}

//********************************* Markup ***********************************//
void markup()
{
    //Declare variables
    float whslCst;      //Wholesale cost
    float mrkPcnt;      //Markup percentage
    float rtPrice;      //Retail Price
    
    //Prompt user for input
    cout << setw(30) << "* Markup *\n";
    cout << setw(30) << "----------\n";
    cout << "This program calculates an item's retail price." << endl;
    cout << "Enter the wholesale cost: ";
    cin >> whslCst;
    while(whslCst < 0)
    {
        cout << "ERROR: Wholesale cost must be a nonnegative number.\n"
                "Re-enter the wholesale cost: ";
        cin >> whslCst;
    }
    cout << "Enter the markup percentage: ";
    cin >> mrkPcnt;
    while(mrkPcnt < 0)
    {
        cout << "ERROR: Markup percentage must be a nonnegative number.\n"
                "Re-enter the markup percentage: ";
        cin >> mrkPcnt;
    }
    
    //Calculate
    rtPrice = clctRtl(whslCst, mrkPcnt);
    
    //Output the results
    cout << setprecision(2) << fixed;
    cout << "\nThe retail price is: $" << rtPrice << endl;
}

//Markup function
float clctRtl(float w, float m)
{
    //Declare variables
    float temp, total;
    
    //Calculate
    temp = m / CNVPCNT * w;
    total = temp + w;
    
    //Output
    return (total);
}

