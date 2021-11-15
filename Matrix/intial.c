#include<stdio.h>

int main (void)
{
    int m,n;
    printf("Enter no. of rows and columns: ");  //Taking input number of rows and columns of the matrix
    scanf("%d %d",&m,&n);
    int a[m][n];

    printf("Enter the elemets:\n");             //Storing the matrix data in the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix:\n");                    //Printing the stored matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}