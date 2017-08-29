//File: main.cpp
//========================================
//Programmer: Uriel Salazar
//========================================
//Created: March 31, 2015, 12:57 PM
//========================================
//Purpose: Freezing and Boiling Points
//========================================

//System Libraries
#include <iostream>	//Input/Output Library
#include <iomanip>      //Parametric Library
using namespace std;	//Input/Output Library under standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main()
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
	cout << "\n" << endl;

	//Exit Program
	return 0;
}