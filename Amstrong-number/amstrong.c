#include<stdio.h>
int main (void)
{
    int number,count = 0,multiply=1,scrape,result = 0;

    printf("Enter a number: ");     //Taking input from the user
    scanf("%d",&number);

    int dummy = number;             //Using a temporary variable to perform calculations on the given input
    while (dummy != 0)              //Loop to count the lenght of the input
    {
        count++;
        dummy /=10;
    }

    int cnt = count;                //Using a temporary variables to perform calculations on the given input
    int dummy2 = number;
    
    while (dummy2 != 0)
    {
        scrape = dummy2%10;         //Taking out the end digit

        while (cnt != 0)            //Loop to multipy the digits w.r.t to the lenght of the input
        {
            multiply *= scrape;
            cnt--;
        }
        result += multiply;         //Reseting the values of the variables
        dummy2 /= 10;
        multiply=1;
        cnt = count;
    }

    if (result==number)            //Checking the value and printing the result 
    printf("It's an amstrong number");
    else
    printf("It's not an amstrong number");
    return 0;
}