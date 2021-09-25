#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int Dollars = 0;                  //Initialising Value of Coins
    int Quatars = 0;
    int Dimes = 0;
    int Nickels = 0;
    int Pennies = 0;
    double Change;   
    do                                //To covert dollars into cents
    {
      Change = get_double("Change owed($): ");
    }
    while (Change < 0);
    int Cents = round(Change*100);
    
    
    if(Cents>=100)                    //To count the number of Dollars
    {
        do
        {
            Cents = Cents - 100;
            Dollars++;
        }
        while(Cents>=100);
    }
    if(Cents>=25)                     //To count the number of Quatars
    {
        do
        {
            Cents = Cents - 25;       //When a Quatar is detected then 25 cents are subracted
            Quatars++;                //A Quatar is added
        }
        while(Cents>=25);
    }
    if (Cents>=10)                    //To count the number of Dimes
    {
         do
        {
            Cents = Cents - 10;       //When a Dime is detected then 10 cents are subracted
            Dimes++;                  //A Dime is added
        }
        while(Cents>=10);
    }
    if (Cents>=5)                     //To count the number of Nickels
    {
         do
        {
            Cents = Cents - 5;        //When a Nickel is detected then 5 cents are subracted
            Nickels++;                //A Nickel is added
        }
        while(Cents>=5);
    }
    if (Cents>=1)                     //To count the number of Pennies
    {
       do
        {
            Cents = Cents - 1;        //When a Pennie is detected then 1 cent are subracted
            Pennies++;                //A Pennie is added
        }
        while(Cents>=1);
    }
    
    if (Cents==0)                     //Returning the number of Coins to be used
    {
     printf(" Dollar/s: %i\n Quatar/s: %i\n Dime/s: %i\n Nickle/s: %i\n Pennie/s: %i\n",Dollars,Quatars,Dimes,Nickels,Pennies);
    }
    return 0;
}








