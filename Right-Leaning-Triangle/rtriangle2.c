#include<stdio.h>

int main (void)
{
    int n;
    printf("Enter a number: ");       //Taking input from the user
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)      //Loop to print the rows
    {
        for (int j = 1; j <= n; j++)  //Loop to print the columns  
        {
            if (j > n-i)              //Print the triangle
            printf("*");
            else
            printf(" ");
        }
        printf("\n");                 //Shifting the row
    }
    return 0;
}