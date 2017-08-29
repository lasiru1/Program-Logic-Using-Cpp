/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 26, 2015, 12:45 PM
 * Purpose: Magic Date Validator
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <string>       //String Library
using namespace std;    //I/O Library under Standard Namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    unsigned short month, day, year;

    
    //Prompt User for Month
    cout << setw(30) << "Magic Date Validator\n";
    cout << setw(30) << "-----------------------\n";
    cout << "Enter any month of the year in numeric form: \n";
    cin >> month;
    cin.ignore();
    
    //Validate
    if (month == 1)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 31))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }
    else if (month == 2)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 28))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }
   else if (month == 3)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 31))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
              return 0;
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
        }
    }
    else if (month == 4)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 30))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }    
    else if (month == 5)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 31))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }    
    else if (month == 6)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 30))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }    
    else if (month == 7)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 31))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }    
    else if (month == 8)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 31))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
              return 0;
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
        }
    }    
    else if (month == 9)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 30))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }    
    else if (month == 10)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day < 1) && (day > 31))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }    
    else if (month == 11)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 30))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
              cout << "You've entered the year incorrectly.\n";
          }
        }  
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
    }    
    else if (month == 12)
    {
        cout << "Enter any day that falls within that month: \n";
        cin >> day;
        if ((day >= 1) && (day <= 31))
        {
          cout << "Enter the two-digit year: \n";
          cin >> year; 
          cin.ignore();
          if ((year < 1) || (year > 99))
          {
             cout << "You've entered the year incorrectly.\n";
          }
        }  
        else
        {
            cout << "Sorry, no such day exists within that month.\n";
            return 0;
        }
     }
    if ((month < 1) || (month > 12))
    {
        cout << "Sorry, no such month exists.\n" ;
        return 0;
    }
    if ((month * day) == year)
    {
     //Calculate and Determine if Date is "Magic"
     cout << "Congratulations! You've discovered a magic date!\n";
     cout << month << "/" << day << "/" << year << "   --->   ";
     cout << month << " * " << day << " = " << year << endl;
    }
    else if ((month * day) != year)
    {
        cout << "Sorry, there is nothing special "
                "about this date. :(" << endl;
    }    

    //Exit Stage Right!
    cout << "\nPress the Enter key to exit..." << endl;  
    cin.get();
    return 0;
}