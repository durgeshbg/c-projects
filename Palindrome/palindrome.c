#include<stdio.h>

int main (void)
{
    int number,result=0,scraped,decoy;
    printf("Enter a nunber: ");         //Taking input from the user
    scanf("%d",&number);
    decoy = number;                     //Decoy value to perform calculations in the loop without disturbing the original number

    for (;decoy != 0; decoy/=10)        //Loop cuts the last digit of the number every time and stops when the number becomes zero
    {
        scraped = decoy%10;             //Cutting the last digit of the number and using it
        result = result*10 + scraped;   //Creating a number in reverse order of the original number 
    }

    if (number==result)                 //Checking the result if it matches the original input 
    printf("It's a palindrome");
    else
    printf("It's not a palindrome");
    return 0;
}