/* 
 * File: main.cpp
 * Author: Mr. Uriel Salazar
 * Created: February 23, 2015, 9:55 AM
 * Purpose: Input/Process/Output and Flowchart!!!
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;// I/O Lubrary under std namespace

// User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    //  Pay Rate = payRate -> $'s/hr
    //  Hours Worked = hrsWrked -> hrs
    //Output:
    //  Gross Pay Check amount = payChk
    float payRate, hrsWrkd, payChk;
    //Prompt the user for inputs
    cout<<"This program calculates your Gross Paycheck."<<endl;
    cout<<"Input your Pay Rate as $xx.xx, provide the x's."<<endl;
    cin>>payRate;
    cout<<"Input your hours Worked this period."<<endl;
    cout<<"Format xxx.x, provide the x's."<<endl;
    cin>>hrsWrkd;
    //Calculate the Paycheck
    payChk=payRate*hrsWrkd;
    //Output the results
    cout<<"$"<<payChk<<"= $"<<payRate<<"/hr * "<<hrsWrkd<<" (hrs)"<<endl;
    //Exit Stage Right!
    return 0;
}
