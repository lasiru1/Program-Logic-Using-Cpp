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
#include <string>       //String Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const float CNVPCNT = 100;              //Convert percentages
const float G = 9.8;                    //Gravitational Constant

//Function Prototypes
void markup();          //Markup
void winDvsn();         //Winning Division
void sfsDrvg();         //Safest Driving Area
void flgDist();         //Falling Distance
void kntcNrg();         //Kinetic Energy
void tmp_tbl();         //Celsius Temperature Table
void cnToss();          //Coin Toss
void prsntVl();         //Present Value
void vrHsptl();         //Overloaded Hospital
void rpsGame();         //Rock, Paper, Scissors Game

//Execution begins
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
      /*cout << "F. \"Celsius Temperature Table\"\n";
        cout << "G. \"Coin Toss\"\n";
        cout << "H. \"Present Value\"\n";
        cout << "I. \"Overloaded Hospital\"\n";
        cout << "J. \"Rock, Paper, Scissors Game\"\n";
      */cout << "\nEnter any other key to exit the program.\n\n";
        
        //Prompt for input
        cout << "Which problem would you like to solve? ";
        cin >> choice;
        cin.ignore();
        cout << endl;
        
        //Solve a problem that has been chosen
        switch (choice)
        {           
            case 'A' : case 'a' :
                markup(); break;
            case 'B' : case 'b' : 
                winDvsn(); break;
            case 'C' : case 'c' : 
                sfsDrvg(); break;
            case 'D' : case 'd' : 
                flgDist(); break;
            case 'E' : case 'e' : 
                kntcNrg(); break;
          /*case 'F' : case 'f' : 
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
//Function Prototypes
float clctRtl(float w, float m);        //Markup function

//Execution begins
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

//*************************** Winning Division *******************************//
//Function Prototypes
float gtSales(string);                          //Get Sales
void highest(float, float, float, float);       //Find Highest

//Execution begins
void winDvsn()
{
    //Declare Variables
    float nEast;
    float sEast;
    float nWest;
    float sWest;
    
    //Output titlea
    cout << setw(37) << "* Winning Division *\n";
    cout << setw(37) << "--------------------\n";
    cout << "This program calculates which division of a company had the"
            "\ngreatest sales this quarter.\n";

    //Obtain Sales for each division
    for(int i = 1; i <= 4; i++)
    {
        switch(i)
        {
            case 1:
               nEast = gtSales("Northeast");
               break;
            case 2:
               sEast = gtSales("Southeast");
               break;
            case 3:
               nWest = gtSales("Northwest");
               break;
            case 4:
               sWest = gtSales("Southwest");
               break;
        }  
    }
    //Function Call "Find Highest"
    highest(nEast, sEast, nWest, sWest);
}

float gtSales(string name)
{
    //Declare variables
    float sales;
    
    //Prompt user for input
    cout << "Enter the " << name << " division's total sales this quarter: ";
    cin >> sales;
    
    //Validate Input
    while(sales < 0)
    {
        cout << "\nERROR: Total sales must be a nonnegative number.\n"
                "Re-enter the total sales: ";
        cin >> sales;
    }   
    
    //Return the value
    return (sales);
}

void highest(float nEast, float sEast, float nWest, float sWest)
{   
    //Find the division with the highest sales
    cout << endl;
    cout << setprecision(2) << fixed;
    if(nEast > sEast && nEast > nWest && nEast > sWest)
    {
        cout << "Northeast Division: $" << nEast << endl;
    }
    else if(sEast > nEast && sEast > nWest && sEast > sWest)
    {
        cout << "Southeast Division: $" << sEast; 
    }
    else if(nWest > nEast && nWest > sEast && nWest > sWest)
    {
        cout << "Northwest Division: $" << nWest; 
    }
    else
    {
        cout << "Southwest Division: $" << sWest; 
    }
}

//************************* Safest Driving Area ******************************//
//Function Prototypes
int nAcdnts(string);                    //Get number of accidents function
void fndLwst(int, int, int, int, int);  //Find lowest function

//Execution begins
void sfsDrvg()
{
    //Declare variables
    float north;
    float south;
    float east;
    float west;
    float central;
    
    //Output title
    cout << setw(39) << "* Safest Driving Area *\n";
    cout << setw(39) << "-----------------------\n";
    cout << "This program calculates which region of San Francisco had the\n"
            "fewest reported automobile collisions last year.\n";
    cout << endl;
    
    //Call function "Number of accidents"
    for(int i = 1; i <= 5; i++)
    {
        switch(i)
        {
            case 1:
                north = nAcdnts("Northern bay area");
                break;
            case 2:
                south = nAcdnts("Southern bay area");
                break;
            case 3:
                east = nAcdnts("Eastern bay area");
                break;
            case 4:
                west = nAcdnts("Western bay area");
                break;   
            case 5:
                central = nAcdnts("Central bay area");
                break;
        } 
    }
    //Call function "Find lowest"
    fndLwst(north, south, east, west, central);
}

int nAcdnts(string name)
{
    //Declare variables
    int acdnts;
    
    //Prompt user for input
    cout << "Enter the number of accidents within the " << name << ": ";
    cin >> acdnts;
    
    //Validate input
    while(acdnts < 0)
    {
        cout << "\nERROR: The number of accidents must be a nonnegative number."
                "\nRe-enter the number of accidents: ";
        cin >> acdnts;
    }
    
    //Return the value
    return(acdnts);
}

void fndLwst(int north, int south, int east, int west, int central)
{
    cout << endl;
    //Determine if North had least accidents
    if(north < south && north < east && north < west && north < central)
    {
        cout << "Safest Driving Area: Northern Bay Area (" << north <<
                " accidents last year)";
    }
    
    //Determine if South had least accidents
    else if(south < north && south < east && south < west && south < central)
    {
        cout << "Safest Driving Area: Southern Bay Area (" << south <<
                " accidents last year)";
    }
    
    //Determine if East had least accidents
    else if(east < north && east < south && east < west && east < central)
    {
        cout << "Safest Driving Area: Eastern Bay Area (" << east <<
                " accidents last year)";
    }
    
    //Determine if West had least accidents
    else if(west < north && west < south && west < east && west < central)
    {
        cout << "Safest Driving Area: Western Bay Area (" << west <<
                " accidents last year)";
    }
    
    //Determine if Central had least accidents
    else
    {
        cout << "Safest Driving Area: Central Bay Area (" << central <<
                " accidents last year)";
    }
}

//*************************** Falling Distance *******************************//
//Function Prototypes
float fDistnc(int);     //Falling distance function

//Execution begins
void flgDist()
{
    //Declare variables
    int fTime;        //The amount of time falling in seconds
    float tDistnc;    //Distance in meters
    
    //Display title
    cout << setw(37) << "* Falling Distance *\n";
    cout << setw(37) << "--------------------\n";
    cout << "This program simulates the distance (meters) an object has\n"
            "fallen after ten seconds.\n";
    cout << "\nPress the Enter key to begin the simulation...";
    cin.get();
    cout << endl;
    
    //Loop the function 10 times
    for(fTime = 1; fTime <= 10; fTime++)
    {
        tDistnc = fDistnc(fTime);
        if(fTime == 1)
        {
            cout << fTime << " second: " << tDistnc << " meters" << endl;
        }
        else
        {
          cout << fTime << " seconds: " << tDistnc << " meters" << endl;  
        }
    }
}

float fDistnc(int fTime)
{
    //Declare variables
    float total;
    
    //Calculate distance fallen
    total = (0.5) * G * (fTime * fTime);
    
    //Return value to main
    return(total);
}

//***************************** Kinetic Energy *******************************//
//Function Prototypes
float kEnergy(float, float);    //Kinetic Energy Function

//Execution begins
void kntcNrg()
{
    //Declare variables
    float mass;         //Mass in kilograms
    float vlcty;        //Velocity in meters per second
    float kinNrgy;      //Kinetic energy in newtons

    //Prompt the user for input
    cout << setw(36) << "* Kinetic Energy *\n";
    cout << setw(36) << "------------------\n";
    cout << "This program calculates a moving object's kinetic energy.\n\n";
    cout << "Enter the mass of the object in kilograms: ";
    cin >> mass;
    cout << "Enter the velocity of the object in meters per second: ";
    cin >> vlcty;
    cout << endl;
    
    //Call the kinetic energy function
    kinNrgy = kEnergy(mass, vlcty);
    
    //Output the results
    cout << "The total kinetic energy of the object is: " << kinNrgy <<
            " newtons" << endl;
}

float kEnergy(float mass, float vlcty)
{
    //Declare variables
    float total;
    
    //Calculate
    total = (0.5) * mass * (vlcty * vlcty);
    
    //Return the value
    return(total);
}