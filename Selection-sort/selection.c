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

    for (int i = 0; i < n; i++)                //Sorting algorithm
    {   
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];            //Swapping algorithm
                arr[i] = arr[j];
                arr[j] = temp;
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