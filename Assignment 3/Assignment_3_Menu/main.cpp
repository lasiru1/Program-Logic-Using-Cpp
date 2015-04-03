//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: April 2, 2015, 5:10 PM
//========================================
//Purpose: Assignment 3 Combined
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <iomanip>      //Parametric Library
#include <cstdlib>      //General Uitilities Library
#include <ctime>        //Time Library
#include <fstream>      //Input/Output File
using namespace std;	//Input/Output Library under standard name space

//User Libraries

//Global Constants
const float G = 9.8e0;          //Gravity
const short UVALUE = 99;        //Unit value for software sales

//Function Prototypes

//Execution Begins
int main()
{
    //Declare Variables
    char choice;
    char another = 'Y';
    
    //Loop entire program
    while (another == 'Y' || another == 'y')
    {
    
    //Display Menu
    cout << setw(25) << "* CSC5 Assignment 3 *\n";
    cout << setw(25) << "---------------------\n";
    cout << "A. \"Roman Numeral Converter\"\n";
    cout << "B. \"Mass and Weight\"\n";
    cout << "C. \"Second Calculator\"\n";
    cout << "D. \"Change for a Dollar Game\"\n";
    cout << "E. \"Software Sales\"\n";
    cout << "F. \"Spectral Analysis\"\n";
    cout << "G. \"Freezing and Boiling Points\"\n";
    cout << "H. \"Internet Service Provider\"\n";
    cout << "I. \"The Monty Hall Problem\"\n";
    cout << "J. \"The Riddler\"\n";
    cout << "\nEnter any other key to exit the program.\n\n";
    
    //Prompt for input
    cout << "Which problem would you like to solve? ";
    cin >> choice;
    cin.ignore();
    cout << "\n\n";
    
    //Exit the program
    if (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' &&
        choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd' &&
        choice != 'E' && choice != 'e' && choice != 'F' && choice != 'f' &&
        choice != 'G' && choice != 'g' && choice != 'H' && choice != 'h' &&
        choice != 'I' && choice != 'i' && choice != 'J' && choice != 'j')
    {
        cout << "Good-bye!" << endl;
        return 0;
    }
    
    //Solve a problem that has been chosen
    switch (choice)
    {
        case 'A' :
        case 'a' :
        {
            //Declare Variables
            short number;

            //Prompt User for input
            cout << setw(31) << "Roman Numeral Converter\n";
            cout << setw(31) << "-----------------------\n";
            cout << "Enter any number from 1-10 that you would like\n"
                    "to convert to a Roman Numeral: ";
            
            //Validate input
            while (!(cin >> number))
            {
                 cout << "\nError! Please enter a number from 1-10: ";
                 cin.clear();
                 cin.ignore(1e9, '\n');
            }

            //Convert the number
            cout << "\n";
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
                break;
            }
            break;
        }
        case 'B' :
        case 'b' :
        {
            //Declare Variables
            float mass = 0;
            float weight;

            //Promt user for input
            cout << setw(38) << "* Weight Calculator *\n";
            cout << setw(38) << "---------------------\n";
            cout << "Due to recent budget cuts, NASA can only launch items with a\n"
                    "specific weight.\n";
            cout << "\nEnter the mass of your item in kilograms: ";

            //Validate input
            while (!(cin >> mass) || (mass < 0))
            {
                cout << "\nError! Please enter a nonnegative number: ";
                cin.clear();
                cin.ignore(1e9, '\n');
            }

            //Calculate and determine output
            weight = mass * G;
            cout << setprecision(1) << fixed;
            cout << "\n";
            if (weight > 1e3)
            {
                cout << "Sorry! Your item weighs " << weight << " newtons, which is\n"
                        "too heavy for current space launch regulations.\n";
            }
            else if (weight < 1e1)
            {
                 cout << "Sorry! Your item weighs " << weight << " newtons, which is\n"
                         "too light for current space launch regulations.\n";
            }
            else
            {
                cout << "Congratulations! Your item weighs " << weight << " newtons.\n"
                        "Your item qualifies for space launch!\n";
            }
            break;
        }
        case 'C' :
        case 'c' :
        {
            //Declare Variables
            float secnds = 0;
            float mSecnds;
            float minutes;
            float hrs;
            float days;

            //Promt user for input
            cout << setw(25) << "Second Calculator\n";
            cout << setw(25) << "-----------------\n";
            cout << "Enter any number of seconds: ";

            //Validate input
            while (!(cin >> secnds))
            {
                cout << "\nInvalid Input! Please enter a nonnegative number: ";
                cin.clear();
                cin.ignore(1e9, '\n');
            }

            //Calculate and determine output
            mSecnds = secnds * 1000;
            minutes = secnds / 60;
            hrs = secnds / 3600;
            days = secnds / 86400;
            cout << setprecision(0) << fixed;
            cout << "\n";
            if (secnds >= 86400)
            {
                cout << secnds << " seconds is approximately " << days << " days.\n";
            }
            else if (secnds >= 3600)
            {
                cout << secnds << " seconds is approximately " << hrs << " hours.\n";
            }
            else if (secnds >= 60)
            {
                cout << secnds << " seconds is approximately " << minutes <<
                                  " minutes.\n";
            }
            else
            {
                cout << secnds << " seconds is approximately " << mSecnds <<
                                  " milliseconds.\n";
            }
            break;
        }            
        case 'D' :
        case 'd' :
        {
            //Declare Variables
            short pennies, pValue;
            short nickels, nValue;
            short dimes, dValue;
            short quartrs, qValue;
            short total;

            //Promt user for input
            cout << setw(39) << "* Change for a Dollar Game *\n";
            cout << setw(39) << "----------------------------\n";
            cout << "Please provide the amount of quarters, dimes, nickels, and\n"
                    "pennies required to make exactly one US dollar.\n";
            cout << "\nHow many pennies would you like to enter? ";

            //Validate Input
            while (!(cin >> pennies) || (pennies < 0))
            {
                    cout << "Hmmm. It seems you didn't input a correct number."
                            " Try again! ";
                    cin.clear();
                    cin.ignore(1e9, '\n');
            }
            cout << "How many nickels would you like to enter? ";
            while (!(cin >> nickels) || (nickels < 0))
            {
                    cout << "Hmmm. It seems you didn't input a correct number."
                            " Try again! ";
                    cin.clear();
                    cin.ignore(1e9, '\n');
            }
            cout << "How many dimes would you like to enter? ";
            while (!(cin >> dimes) || (dimes < 0))
            {
                    cout << "Hmmm. It seems you didn't input a correct number."
                            " Try again! ";
                    cin.clear();
                    cin.ignore(1e9, '\n');
            }
            cout << "How many quarters would you like to enter? ";
            while (!(cin >> quartrs) || (quartrs < 0))
            {
                    cout << "Hmmm. It seems you didn't input a correct number."
                            " Try again! ";
                    cin.clear();
                    cin.ignore(1e9, '\n');
            }

            //Calculate and determine output
            pValue = pennies * 1;
            nValue = nickels * 5;
            dValue = dimes * 10;
            qValue = quartrs * 25;
            total = pValue + nValue + dValue + qValue;
            if (total == 100)
            {
                cout << "\nCongratulations! You Won! :D\n" << pennies << " penny/"
                        "pennies + " << nickels << " nickel(s) + " << dimes <<
                        " dime(s) + " << quartrs << " quarter(s)\n= one US dollar!\n";
            }
            else if (total > 100)
            {
                cout << "\nSorry! You Lost! :(\n" << pennies << " penny/pennies + "
                        << nickels << " nickel(s) + " << dimes << " dime(s) + "
                        << quartrs << " quarter(s)\nis MORE than one US dollar!\n";
            }
            else if (total < 100)
            {
                cout << "\nSorry! You Lost! :(\n" << pennies << " penny/pennies + "
                        << nickels << " nickel(s) + " << dimes << " dime(s) + "
                        << quartrs << " quarter(s)\nis LESS than one US dollar!\n";
            }
            break;
        }
        case 'E' :
        case 'e' :
        {
            //Declare Variables
            short units;
            float dscnt;
            float total;

            //Prompt user for input
            cout << setw(38) << "* Software Sales *\n";
            cout << setw(38) << "------------------\n";
            cout << "Thank you for choosing \"Orange Software Inc.\" to fulfill your\n"
                    "startup's software needs!\n";
            cout << "\nPlease enter the quantity of premium packages you would like to"
                    " order: ";

            //Validate input
            while (!(cin >> units) || (units < 0))
            {
                cout << "\nPlease enter a nonnegative number: ";
                cin.clear();
                cin.ignore(1e9, '\n');
            }

            //Calculate and determine output
            cout << setprecision(2) << fixed;
            cout << "\n";
            if ((units >= 1e1) && (units <= 1.9e1))
            {
                dscnt = 0.2 * units * UVALUE;
                total = units * UVALUE - dscnt;
                cout << "Excellent! Your batch order qualifies for a 20% discount!\n"
                        "The total cost of your purchase is $" << total << endl;
            }
            else if ((units >= 2e1) && (units <= 4.9e1))
            {
                dscnt = 0.3 * units * UVALUE;
                total = units * UVALUE - dscnt;
                cout << "Excellent! Your batch order qualifies for a 30% discount!\n"
                        "The total cost of your purchase is $" << total << endl;
            }
            else if ((units >= 5e1) && (units <= 9.9e1))
            {
                dscnt = 0.4 * units * UVALUE;
                total = units * UVALUE - dscnt;
                cout << "Excellent! Your batch order qualifies for a 40% discount!\n"
                        "The total cost of your purchase is $" << total << endl;
            }
            else if (units >= 1e2)
            {
                dscnt = 0.5 * units * UVALUE;
                total = units * UVALUE - dscnt;
                cout << "Excellent! Your batch order qualifies for a 50% discount!\n"
                        "The total cost of your purchase is $" << total << endl;
            }
            else
            {
                total = units * UVALUE;
                cout << "Excellent!\n"
                        "The total cost of your purchase is $" << total << endl;
            }
            break;  
        }
        case 'F' :
        case 'f' :
        {
            //Declare Variables
            float rWaves, mWaves, infared, vLight, uViolet, xRays;
            float length;

            //Input Assigned Values
            rWaves = 1e-2;
            mWaves = 1e-3;
            infared = 7e-7;
            vLight = 4e-7;
            uViolet = 1e-8;
            xRays = 1e-11;

            //Promt user for input
            cout << setw(38) << "* Radiation Calculator *\n";
            cout << setw(38) << "------------------------\n";
            cout << "Enter the wavelength of the electromagnetic wave in meters: \n";

            //Validate input
            while (!(cin >> length) || (length < 0))
            {
                cout << "\nError! Please enter a nonnegative number: ";
                cin.clear();
                cin.ignore(1e9, '\n');
            }

            //Calculate and determine output
            cout << setprecision(6) << fixed;
            cout << "\n";
            if (length >= rWaves)
            {
                cout << "Wavelength: " << length << " m" << endl;;
                cout << "Radiation Type: Radio Waves" << endl;
            }
            else if ((length < rWaves) && (length >= mWaves))
            {
                cout << "Wavelength: " << length << " m"  << endl;
                cout << "Radiation Type: Microwaves" << endl;
            }
            else if ((length < mWaves) && (length >= infared))
            {
                cout << "Wavelength: " << length << " m"  << endl;
                cout << "Radiation Type: Infrared" << endl;
            }
            else if ((length < infared) && (length >= vLight))
            {
                cout << "Wavelength: " << length << " m"  << endl;
                cout << "Radiation Type: Visible Light" << endl;
            }
            else if ((length < vLight) && (length >= uViolet))
            {
                cout << "Wavelength: " << length << " m"  << endl;
                cout << "Radiation Type: Ultraviolet" << endl;
            }
            else if ((length < uViolet) && (length >= xRays))
            {
                cout << "Wavelength: " << length << " m"  << endl;
                cout << "Radiation Type: X Rays" << endl;
            }
            else
            {
                cout << "Wavelength: " << length << " m"  << endl;
                cout << "Radiation Type: Gamma Rays" << endl;
            } 
            break;
        }
        case 'G' :
        case 'g' :
        {
            //Declare Variables
            float temp;

            //Prompt user for input
            cout << setw(45) << "* Extreme Temperature Calculator *\n";
            cout << setw(45) << "----------------------------------\n";
            cout << "This program calculates the freezing and boiling points of\n"
                    "common substances found in chemistry!\n";
            cout << "\nEnter the temperature in degrees Fahrenheit: ";

            //Validate input
            while (!(cin >> temp))
            {
                    cout << "\nInvalid Input!\n"
                            "Enter the temperature in degrees Fahrenheit: ";
                    cin.clear();
                    cin.ignore(1e9, '\n');
            }

            //Calculate and determine output
            cout << "\n";
            if (temp <= -362)
            {
                    cout << "This temperature is cold enough to freeze:\n"
                            "Ethyl Alcohol, Mercury, Oxygen, and Water.\n"
                            "This temperature is not hot enough to boil\n"
                            "any substances.";
            }
            else if ((temp > -362) && (temp < -306))
            {
                    cout << "This temperature is cold enough to freeze:\n"
                            "Ethyl Alcohol, Mercury, and Water.\n"
                            "This temperature is not hot enough to boil\n"
                            "any substances.";
            }
            else if ((temp >= -306) && (temp <= -173))
            {
                    cout << "This temperature is cold enough to freeze:\n"
                            "Ethyl Alcohol, Mercury, and Water.\n"
                            "This temperature is hot enough to boil:\n"
                            "Oxygen.";
            }
            else if ((temp > -173) && (temp <= -38))
            {
                    cout << "This temperature is cold enough to freeze:\n"
                            "Mercury and Water.\n"
                            "This temperature is hot enough to boil:\n"
                            "Oxygen.";
            }
            else if ((temp > -38) && (temp <= 32))
            {
                    cout << "This temperature is cold enough to freeze:\n"
                            "Water.\n"
                            "This temperature is hot enough to boil:\n"
                            "Oxygen.";
            }
            else if ((temp > 32) && (temp < 172))
            {
                    cout << "This temperature is not cold enough to freeze\n"
                            "any substances.\n"
                            "This temperature is hot enough to boil:\n"
                            "Oxygen.";
            }
            else if ((temp >= 172) && (temp < 212))
            {
                    cout << "This temperature is not cold enough to freeze\n"
                            "any substances.\n"
                            "This temperature is hot enough to boil:\n"
                            "Ethyl Alcohol and Oxygen.";
            }
            else if ((temp >= 212) && (temp < 676))
            {
                    cout << "This temperature is not cold enough to freeze\n"
                            "any substances.\n"
                            "This temperature is hot enough to boil:\n"
                            "Ethyl Alcohol, Oxygen, and Water.";
            }
            else
            {
                    cout << "This temperature is not cold enough to freeze\n"
                            "any substances.\n"
                            "This temperature is hot enough to boil:\n"
                            "Ethyl Alcohol, Mercury, Oxygen, and Water.";
            }
            break;
        }
        case 'H' :
        case 'h' :
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
            cout << setw(39) << "* Internet Service Provider *\n";
            cout << setw(39) << "-----------------------------\n";
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
            break;
        }
        case 'I' :
        case 'i' :
        {
            //Seed the random number generator
            srand(time(0));


            //Declare Variables
            unsigned int car, cnPrize;
            unsigned int choiceA, choiceB;
            unsigned int tallyA, tallyB;
            char stay;

             //Prompt user for input
            cout << setw(45) << "* The Monty Hall Game Show Problem *\n";
            cout << setw(45) << "------------------------------------\n";
            cout << "You've been selected for a chance to win the grand prize!\n";
            cout << "You will choose one of three doors. Behind one door is a fabulous"
                    "\nnew car! While the other two are merely consolation prizes.\n\n"
                    "Before we open your door, we will reveal one of the consolation\n"
                    "prizes and give you a choice:\n"
                    "Change your door, or Stay with the original!\n\n"
                    "Enter \"C\" to change your door, or \"S\" to stay with your\n"
                    "original choice: ";
            cin >> stay;

            //Validate input
            while ((stay != 'C' && stay != 'c' && stay != 'S' && stay != 's'))
            {
                cout << "\nInvalid Input! Enter \"C\" to change your door, or \"S\" to"
                        "\nstay with your original choice: ";
                cin >> stay;
            }

            //Initialize variables
            tallyA = 0, tallyB = 0;

            //Simulate the program 10,000 times
            for (int smulatn = 1; smulatn <= 10000; smulatn++)
            {
                //Randomly select a door
                choiceA = (rand() % 3) + 1;

                //Randomly select location for the Car
                car = (rand() % 3) + 1;

                //Make the revealed door a consolation prize
                //cnPrize cannot be the same number as the car or choiceA
                do
                {    
                    cnPrize = (rand() % 3) + 1;
                } while (cnPrize == car || cnPrize == choiceA);

                //Change doors when given a choice
                if (stay != 'S' && stay != 's')
                {
                    //What is ChoiceB, meaning the door not chosen
                    do
                    {    
                      choiceB = (rand() % 3) + 1;
                    } while (choiceB == cnPrize || choiceB == choiceA);
                    //When found, swap
                    choiceA = choiceB;
                }

                //Tally the number of wins and losses
                if (choiceA == car) tallyA++;
                else tallyB++;
            }

            //Output the results
            cout << "\n";
            cout << setprecision(1) << fixed;
            cout << setw(36) << "* After 10,000 simulations: *\n";
            cout << setw(36) << "-----------------------------\n";
            if (stay == 'S' || stay == 's')
            {
               cout << "Staying with your original door has a " << 100.0f * tallyA /
                       10000 << "%" << " chance of\nwinning the grand prize!\n\n";
               cout << "Changing your door has a " << 100.0f * tallyB / 10000
                    << "%" << " chance of winning the\ngrand prize!\n\n"; 
            }
            else
            {
               cout << "Changing your door has a " << 100.0f * tallyA /
                       10000 << "%" << " chance of\nwinning the grand prize!\n\n";
               cout << "Staying with your original door has a " << 100.0f * tallyB /
                       10000 << "%" << "\nchance of winning the grand prize!\n\n";  
            }
            break;    
        }
        case 'J' :
        case 'j' :
        {     
            //Output Riddle
            cout << setw(25) << "* The Riddler *\n";
            cout << setw(25) << "---------------\n";
            cout << "Find an address where:\n\n"
                    "All four digits are different.\n"
                    "The digit in the thousands place is three times the digit in the tens place.\n"
                    "The number is odd.\n"
                    "The sum of the digits is 27.\n";
            
            //Loop for all possible addresses
            for (int d1000 = 0; d1000 <= 9; d1000++)    //1000's digit
            {
               for (int d100 = 0; d100 <= 9; d100++)    //100's digit
               {
                  for (int d10 = 0; d10 <= 9; d10++)    //10's digit
                  {
                     for (int d1 = 0; d1 <= 9; d1++)    //1's digit
                     {
                        if ((d1000 == 3 * d10)                 &&
                           (d1 % 2 == 1)                       &&
                           ((d1000 + d100 + d10 + d1) == 27)   &&
                           (d1 != d10 && d1 != d100 && d1 != d1000 && d10 != d100 && d10 != d1000 && d100 != d1000))
                        {
                            cout << "\nThe Address Number = ";
                            cout << d1000 << d100 << d10 << d1 << endl;
                        }
                     }
                  }                   
               }               
            }
            break;
        }
    };
     
     //Prompt for another solution
     cout << "\nWould you like to solve another problem? (Y/N)\n";
     cin >> another;
     if (another == 'N' || another == 'n')
     {
         cout << "\nGood-bye!" << endl;
     }
     cout << "\n";
     
     
    }   //End while loop
    
    //Exit Program
    return 0;
}