#include<stdio.h>

int main (void)
{
    int n,pw=1,result=0;
    printf("Enter the binary number: ");   //Takng input from the user
    scanf("%d",&n);

    int scrape;
    while (n != 0)                         //Converting the binary number into decimal number
    {
       scrape = n%10;                     
       result += scrape*pw;
       n /=10;
       pw *=2;
    }
    printf("The decimal value: %d",result); //Printing the decimal value
}