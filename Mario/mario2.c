#include <stdio.h>

int main (void)
{
    int n;
    printf("Enter the height: ");        //Taking input from the user
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)         //Printing the number of rows
    {
        for (int j = 1; j <= 2*n+1; j++) //Printing the number of columns
        {
            if (j>=n+1-i && j<=n+1+i)    //Printing the actual structure
            {
                if (j == n+1)
                printf(" "); 
                else
                printf("#");
            }
            else
            printf(" ");
        }
        printf("\n");                    //Shitfing to new row
    }
    return 0;
}