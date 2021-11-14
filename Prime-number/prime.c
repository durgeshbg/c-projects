#include<stdio.h>
#include<math.h>

int main (void)
{
    int n,x,signal=0;
    printf("Enter a number: ");             //Taking input frm the user
    scanf("%d",&n);
    x = ceil(sqrt(n));                      //Calculating the square root of the number and ceiling the value

    for (int i = 2; i <= x; i++)            //Loop to check if "n" is divisible by number <x and >=2 
    {
        if (n%i == 0)
        signal = 1;
    }

    if ((signal==0 && n!=1) || n==2)        //Checking if 'n' satisfied the above condition and not equal to one or equal to 2
    printf("It's a prime number");
    else
    printf("It's not a prime number");
    return 0;   
}