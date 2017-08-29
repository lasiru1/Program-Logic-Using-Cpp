/* 
 * File:   main.cpp
 * Author: Uriel Salazar
 * Created: March 7, 2015, 10:28 AM
 * Purpose: 8th Homework Problem (Ocean Levels)
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library under Standard Namespace

//User Libraries

//Global Constants
float OCNLVL=1.5e0;//Increase of Ocean Levels per year (mm)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float lvlF, lvlS, lvlT;
    //Input Assigned Values
    lvlF=5e0*OCNLVL;//Ocean levels in five years
    lvlS=7e0*OCNLVL;//Ocean levels in seven years
    lvlT=1e1*OCNLVL;//Ocean levels in ten years
    //Output Everything!
    cout<<"* Ocean Level Projections *"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Sea level increase per year = "<<OCNLVL<<"mm"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Ocean Level Increase in 2020 = "<<lvlF<<"mm"<<endl;
    cout<<"Ocean Level Increase in 2022 = "<<lvlS<<"mm"<<endl;
    cout<<"Ocean Level Increase in 2025 = "<<lvlT<<"mm"<<endl;
    //Exit Stage Right!
    return 0;
}