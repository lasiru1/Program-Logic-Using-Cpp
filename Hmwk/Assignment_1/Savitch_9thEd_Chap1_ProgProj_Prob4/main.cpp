/* 
 * File:   main.cpp
 * Author: Mr. Uriel Salazar
 * Created on March 2, 2015, 9:03 AM
 *      Purpose: Free Fall problem from Savitch
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float G=3.2174e1f;//Acceleration in ft/sec^2 on Earth
const float CNVFTMT=3.048e-1f;//Conversion from feet to 

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate Distance
    dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1/2*G*time*time;//DOES NOT WORK!!!!!
    //dstnce=1.0f/2*G*time*time;
    //dstnce=1/2.0f*G*time*time;
    //dstnce=G*1/2*time*time;
    //dstnce=0.5f*G*time*time;
    //dstnce=5e-1f*G*time*time;
    cout<<"Distance Fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance Fallen = "<<dstnce*CNVFTMT<<"(feet)"<<endl;
    //Exit Stage Right!
    return 0;
}

