#include<stdio.h>

int main (void)
{
    int h,n=1;

    printf("Enter the height of the triangle: ");    //Taking input from the user 
    scanf("%d",&h);

    for (int i = 0; i < h; i++)                      //Printing the triangle
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ",n);                          //Filling the triangle with cosecutive integers
            n++;
        }
        printf("\n");
    }
    return 0;
}