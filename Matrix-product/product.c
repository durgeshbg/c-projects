#include <stdio.h>

int main (void)
{
    int am,an;                                                  //Matrix A
    printf("Enter no. of rows and columns of matrix A: ");      //Taking input of rows and columns in matrix A
    scanf("%d %d",&am,&an);
    int A[am][an];

    printf("Enter the elemets of matrix A:\n");                 //Taking input elemets of matrix A
    for (int i = 0; i < am; i++)
    {
        for (int j = 0; j < an; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");

    int bm,bn;                                                  //Matrix B
    printf("Enter no. of rows and columns of matrix B: ");      //Taking input of rows and columns in matrix B
    scanf("%d %d",&bm,&bn);
    int B[bm][bn];

    printf("Enter the elemets of matrix B:\n");                 //Taking input elemets of matrix B    
    for (int i = 0; i < bm; i++)
    {
        for (int j = 0; j < bn; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    
    int P[am][bm],sum = 0;                                      //Multipying both the matrices (A&B) and storing the values them in the product matrix
    for (int i = 0; i < am; i++)
    {
        for (int j = 0; j < bn; j++)
        {
            for (int k = 0; k < am; k++)
            {
                sum += A[i][k]*B[k][j];
            }
            P[i][j] = sum;
            sum = 0;   
        }
    }
    
    printf("The resultant matrix is:\n");                      //Printing the resultant matrix
    for (int i = 0; i < am; i++)
    {
        for (int j = 0; j < bn; j++)
        {
            printf("%d ",P[i][j]);
        }
        printf("\n");
    } 
    return 0; 
}                     
