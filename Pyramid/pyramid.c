#include<stdio.h>

int main (void)
{
    int n;
    printf("Enter the height: ");              //Taking input from the user
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)               //Printing the rows
    {
        for (int j = 1; j <= 2*n-1; j++)       //Printing the columns
        {
            if (j >= n-(i-1) && j <= n+(i-1))  //Printing the pyramid
            printf("*");
            else
            printf(" ");
        }
        printf("\n");                          //Shifting to a new row
    }
    return 0;
}