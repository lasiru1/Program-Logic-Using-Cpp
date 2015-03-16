/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 15, 2015, 10:13 PM
 * Purpose: Word Game
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
    string name, city, college, prfssn, animal, pName;
    unsigned short age;
    
    //Prompt User for Inputs
    cout << setw(25) << "Word Game\n";
    cout << setw(25) << "---------\n";
    cout << "What is your name?\n";
    getline(cin, name);
    cout << "What is your age?\n";
    cin >> age;
    cin.ignore();
    cout << "Where do you want to live?\n";
    getline(cin, city);
    cout << "Where would you like to study?\n";
    getline(cin, college);
    cout << "What would you like to be?\n";
    getline(cin, prfssn);
    cout << "What is your favorite animal?\n";
    getline(cin, animal);
    cout << "What is the animal's name?\n";
    getline(cin, pName);
    
    //Output Word Game
    cout << "\n";
    cout << "There once was a person named " << name << " who lived in " << city
            << ". At the age of \n" << age << ", " << name << " went to college"
            " at " << college << ". " << name << " graduated and went to work\n"
            "as a " << prfssn << ". Then, " << name << " adopted a(n) " << 
            animal << " named " << pName << ". They\nboth lived hapily ever "
            "after!" << endl;
    cout << "\nPress the Enter key to exit...";
    cin.get();

    //Exit Stage Right!
    return 0;
}