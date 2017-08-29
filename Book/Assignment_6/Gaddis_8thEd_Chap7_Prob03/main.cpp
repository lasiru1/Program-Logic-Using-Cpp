//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: May 21, 2015, 11:28 PM
//==========================================================================
//Purpose: Salsa and Chips
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <string>       //String Library
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants
const unsigned short TYPES = 5;

//Function Prototypes
void getJars(const string[], int[], const unsigned short);
int tSales(const int[], const unsigned short);
string highest(const string[], int[], const unsigned short);
string lowest(const string[], int[], const unsigned short);
int int_chk(int);

//Execution begins
int main()
{
    //Declare variables
    int total;     
    int jars[TYPES];
    string hType, lType;
    string salsa[TYPES] =
    {
        "\"Mild\"", "\"Medium\"", "\"Sweet\"", "\"Hot\"", "\"Zesty\""
    };
    
    //Output program title
    cout << setw(25) << "Chips and Salsa" << endl;
    cout << setw(25) << "---------------" << endl;
    
    //Call the "get jars" function to get the number of jars sold for each type
    getJars(salsa, jars, TYPES);
    
    //Call the "total sales" function to get the total jars sold
    total = tSales(jars, TYPES);
    
    //Call the "highest" function
    hType = highest(salsa, jars, TYPES);
    
    //Call the "lowest" function
    lType = lowest(salsa, jars, TYPES);
    
    //Output the results
    cout << endl;
    cout << setw(15) << "Flavor" << "\t\t" << "Jars Sold" << endl;
    cout << setw(15) << "------" << "\t\t" << "---------" << endl;
    for(int f = 0; f < TYPES; f++)
    {
        cout << setw(15) << salsa[f] << "\t\t   " << jars[f] << endl;
    }
    cout << endl;
    cout << "Total Jars Sold: " << total << endl;
    cout << "Highest Selling Flavor: " << hType << endl;
    cout << "Lowest Selling Flavor: " << lType << endl;
    
    //Exit the program
    return 0;
}

//(getJars function)
void getJars(const string types[], int sales[], const unsigned short size)
{
    //
    int jars = 0;       //Number of jars sold for each type
    
    //Cycle through the array to get number of jars sold for each type
    for(int i = 0; i < size; i++)
    {
        cout << "Please enter this month's total jars sold for the\n"
             << types[i] << " flavor of salsa: ";
        sales[i] = int_chk(jars);
    }
}

//(tSales function)
int tSales(const int sales[], const unsigned short size)
{
    //Declare variables
    int tJars = 0;      //Total jars
    
    //Cycle through the array to get the sum of all sales
    for(int j = 0; j < size; j++)
    {
        tJars += sales[j];
    }
    
    //Return total
    return(tJars);
}

//(highest function)
string highest(const string types[], int sales[], const unsigned short size)
{
    //Declare variables
    int mJars;          //Most Jars
    string tFlavor;     //Top flavor
    
    //Get the first element of the array
    mJars = sales[0];
    tFlavor = types[0];
    
    //Cycle through the array to find which types sold most jars
    for(int c = 1; c < size; c++)
    {
        if(sales[c] > mJars)
        {
            mJars = sales[c];
            tFlavor = types[c];
        }
    }
    
    //Return the name of the top flavor
    return(tFlavor);
}

//(lowest function)
string lowest(const string types[], int sales[], const unsigned short size)
{
    //Declare variables
    int lJars;          //Least Jars
    string bFlavor;     //bottom flavor
    
    //Get the first element of the array
    lJars = sales[0];
    bFlavor = types[0];
    
    //Cycle through the array to find which types sold most jars
    for(int c = 1; c < size; c++)
    {
        if(sales[c] < lJars)
        {
            lJars = sales[c];
            bFlavor = types[c];
        }
    }
    
    //Return the name of the bottom flavor
    return(bFlavor);
}

//(int_chk function)
int int_chk(int number)
{
    //Determine if the input is a positive integer
    while(!(cin >> number) || number < 0)
    {
        cout << "ERROR: Please input a positive integer: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    
    //Return validated input
    return(number);
}