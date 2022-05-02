#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int a =  get_int("First number: ");                               //First number
    int b = get_int("Second number: ");                               //Second number
    int temp;                                                         //Temorary variable
    
    temp = a;                                                         //Swaping the two numbers
    a = b;
    b = temp;

    printf("First number (new): %i\nSecond number (new): %i", a, b); //Printing the swapped values
}