#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int a = 0;                                
    int n = get_int("Enter the no. of digits to be sorted: ");
    int arr[n];

    for (int i = 0; i < n; i++)                //Taking input of unsorted digits from the user
    {
        a++;
        printf("Input Digit[%i]: ",a);
        arr[i] = get_int("");
    }

    for (int i = 0; i < n-1; i++)              //Sorting algorithm
    {   
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];            //Swapping algorithm
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array:");                 //Printing the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%i ",arr[i]);
    }
    return 0;
}