#include<stdio.h>

int main (void)
{
    int number,scrape,result = 0;           

    printf("Enter a number: ");     //Taking input from the user
    scanf("%d",&number);

    int temp = number;              //Using a temporary variable to perform calculations  the original input
    while (temp !=0)                //Loop to find, if the input is a strong number
    {   
        scrape = temp%10;           //Cutting the last number from the input

        int fact=1;                 //Loop for calculating the factorial of the number
        for (int i = 1; i <= scrape; i++)
        {
            fact *= i;
        }
        
        result += fact;              //Calculating the result 
        temp /=10;
    }

    if (result==number)              //Checking if the result is actually a strong number
    printf("It's a strong number");
    else
    printf("It's not a strong number");
    return 0;
}