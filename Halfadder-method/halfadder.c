#include <stdio.h>

int main (void)
{
    int x,y,sum,carry;                          
    printf("Enter the 1st number: ");   //Taking input from the user
    scanf("%d",&x);
    printf("Enter the 2nd number: ");
    scanf("%d",&y);

    while (y!=0)                        //Performing the half adder logic
    {
        sum = x^y;
        carry = (x&y)<<1;
        x = sum;
        y = carry;
    }

    printf("Sum: %d",x);                //Printing the result
    return 0;
}