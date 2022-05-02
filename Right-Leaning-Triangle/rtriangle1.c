#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;                          //Variable contains height and width of the triangle
    int a=0;                        //Variable  used to specify #'s to fill the triangle in particular row
    do
    {
        n = get_int("Height: ");    //Takes input from the user
    }
    while (n<=0 || n>=20);          //Loop limits the user to choose the height between [0,20]
    
    for (int i=0; i<n; i++)         //Loop runs the no of rows
    {
        a++;                        //No of the hashes to be filled
        for (int j=0; j<n-a; j++)   //Fills 'n-a' number of spaces in the respective row
        {
            printf(" ");
        }
        for (int k=0; k<a; k++)     //Fills 'a' number of #'s after spaces in the respective row
        {
            printf("#");
        }
        printf("\n");               //Changes row after filling it with 'n-a' no. of '#'s and 'a' no. of ' 's 
    }
}