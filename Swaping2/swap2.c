#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int a = get_int("First number: ");                                //First number
    int b = get_int("Second number: ");                               //Second number
    
    a = a - b;                                                        // a = a - b
    b = a + b;                                                        // b = (a - b) + b = a 
    a = b - a;                                                        // a = b - (a - b) = b

    printf("First number (new): %i\nSecond number (new): %i", a, b);  //Printing the swapped values
}