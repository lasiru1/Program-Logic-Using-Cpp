//File: main.cpp
//==========================================================================
//Programmer: Uriel Salazar
//==========================================================================
//Created: April 29, 2015, 9:39 PM
//==========================================================================
//Purpose: Check out dice statistics
//==========================================================================

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Parametric Library
#include <cstdlib>
#include <ctime>
using namespace std;    //Input/Output Library under standard name space

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char, unsigned char);


//Execution begins
int main()
{
    //Declare variables
    int win = 0, lose = 0, nThrows = 0, nGames = 10000;
    
    //Loop on the games and take stats
    for(int game = 1; game <= nGames; game++)
    {
        int sum = roll(2, 6);
        if(sum == 2 || sum == 3 || sum == 12)
        {
            lose++;
        }
        else if(sum == 7 || sum == 11)
        {
            win++;
        }
        else
        {
            //Keep throwing
            bool rollAgn;
            do{
                rollAgn = true;
                int sum2 = roll(2, 6);
                if(sum2 == sum)
                {
                    win++;
                    rollAgn = false;
                }
                else if(sum2 == 7)
                {
                    lose++;
                    rollAgn = false;
                }
              } while(rollAgn);
        }
    }
    //Output wins and losses
    cout << "Total number of Games  = " << nGames << endl;
    cout << "Total number of wins   = " << win << endl;
    cout << "Total number of Losses = " << lose << endl;
    cout << "Total win + lose       = " << win + loss << endl; 





unsigned char roll(unsigned char nDie, unsigned char sides)
{
    //Declare & Initialize variables
    unsigned char sum = 0;
    for(int die = 1; die <= nDie; die++)
    {
        sum += (rand() % sides + 1);
    }
    return sum;
}