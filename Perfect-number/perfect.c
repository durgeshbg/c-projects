#include <stdio.h>

int main (void)
{
    int n;
    printf("Enter a number: ");         //Taking input from the user
    scanf("%d",&n);

    int sum=0;                          //Calculates the divisors of the input and adds them up
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            sum += i;
        }
    }

    if (sum==n)
    printf("It's a perfect number");    //Checks the condition if the input is a perfect number
    else 
    printf("It's not a perfect number");
    return 0;
}