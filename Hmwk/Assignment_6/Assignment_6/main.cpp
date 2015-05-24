//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: May 21, 2015, 11:47 AM
//==========================================================================
//Purpose: Homework Assignment 6 - 10 problems utilizing Arrays
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <ctime>        //Time Library
#include <cstdlib>      //Utilites Library
using namespace std;    //Input/Output Library under standard namespace

//User Libraries

//Global Constants

//Function Prototypes
void lrg_sml();
void salsa();
void lrgr_n();

//Execution begins
int main()
{ 
    //Declare variables
    char choice, another;
    
    //Repeat the program
    do
    {
    
        //Output title
        cout << setw(25) << "CSC5 Assignment #6" << endl;
        cout << setw(25) << " by Uriel Salazar " << endl;
        cout << setw(25) << "------------------" << endl << endl;

        //Output Menu
        cout << "A. \"Largest/Smallest Array Values\"" << endl;
        cout << "B. \"Salsa and Chips\"" << endl;
        cout << "C. \"Larger than n\"" << endl;
        cout << "\nPress any other key to exit the program" << endl;

        //Prompt the user for input
        cout << "\nWhich problem would you like to solve? ";
        cin >> choice;
        cin.ignore();
        cout << endl;

        switch(choice)
        {
            case 'A' : case 'a' :
                lrg_sml();
                break;
            case 'B' : case 'b' :
                salsa();
                break;
            case 'C' : case 'c' :
                lrgr_n();
                break;
            default:
                cout << "Thank you for using this program!" << endl;
                return 0;
        };
        
        //Prompt the user for another solution
        cout << "\nWould you like to solve another problem? ";
        cin >> another;
        cout << endl;
        
    //Condition for repeating the loop    
    } while(another == 'Y' || another == 'y');
    
    //Exit with prompt
    if(another != 'Y' || another != 'y')
    {
        cout << "Thank you for using this program!" << endl;
    }

    //Exit the program
    return 0;
}

/********************* Largest/Smallest Array Values **************************/
//Global Constants
const unsigned short T_VALS = 10;       //The total number of values

//Function Prototypes
void getVals(float[], unsigned short);
float largest(const float[], unsigned short);
float smalest(const float[], unsigned short);

//Execution begins
void lrg_sml()
{
    //Declare variables
    float value[T_VALS];
    float lowVal, larVal;
    
    //Output Program Intro
    cout << setw(33) << "Largest/Smallest Array Values" << endl;
    cout << setw(33) << "-----------------------------" << endl << endl;
    
    //Call the "get value" function to get the 10 values 
    getVals(value, T_VALS);
    
    //Call the "largest" function to get the largest value
    larVal = largest(value, T_VALS);
    
    //Call the "smallest" function to get the lowest value
    lowVal = smalest(value, T_VALS);
    
    //Output the results
    cout << endl;
    cout << "Largest Value: " << setw(5) << larVal << endl;
    cout << "Smallest Value:" << setw(5) << lowVal << endl;
}

//(getVals function)
void getVals(float val[], unsigned short size)
{
    //Prompt user for input
    for(int i = 0; i < size; i++)
    {
        cout << "Please enter value #" << (i+1) << ": ";
        cin >> val[i];
    }
}

//(largest function)
float largest(const float val[], unsigned short size)
{
    //Declare variables
    float large;
    
    //Get the first element of the array
    large = val[0];
    
    //Cycle through the array to find the largest value
    for(int f = 1; f < size; f++)
    {
        if(val[f] > large)
        {
            large = val[f];
        }
    }
    
    //Return the largest value
    return(large);
}

//(smalest function)
float smalest(const float val[], unsigned short size)
{
    //Declare variables
    float small;
    
    //Get the first element of the array
    small = val[0];
    
    //Cycle through the array to find the smallest value
    for(int c = 1; c < size; c++)
    {
        if(val[c] < small)
        {
            small = val[c];
        }
    }
    
    //Return the smallest value
    return(small);
}

/**************************** Salsa and Chips *********************************/
//Global Constants
const unsigned short TYPES = 5;

//Function Prototypes
void getJars(const string[], int[], const unsigned short);
int tSales(const int[], const unsigned short);
string highest(const string[], int[], const unsigned short);
string lowest(const string[], int[], const unsigned short);
int int_chk(int);

//Execution begins
void salsa()
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
/****************************** Larger Than "n" *******************************/
//Global Constants
const int SIZE = 10;

//Function Prototypes
void larger(int[], int, int);

//Execution begins
void lrgr_n()
{   
    //Set the random number seed
    srand(time(0));
       
    //Declare variables
    int n;
    int temp;
    int array[SIZE];
    
    //Output program title
    cout << setw(20) << "Larger than \"n\"" << endl;
    cout << setw(20) << "-----------------" << endl;
    
    //Fill the array
    for(int i = 0; i < SIZE; i++)
    {
        temp = (rand() % 100) + 1;
        array[i] = temp;
    }
    
    //Prompt user for input
    cout << "Please enter a number \"n\": ";
    cin >> n;
    cout << endl;
    
    //Write to the "larger" function
    larger(array, SIZE, n);
}

//(larger function)
void larger(int numbers[], int size, int n)
{    
    
    //Cycle through the array to find numbers greater than "n"
    cout << "Numbers larger than \"n\":" << endl;
    for(int j = 0; j < size; j++)
    {
        if(numbers[j] > n)
        {
            cout << numbers[j] << endl;
        }
    }
}