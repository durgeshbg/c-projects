#include <stdio.h>

void minmax (int *min, int *max, int array[], int size) //Finding the minimum and maximum values in the array
{
    *min = *max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i]>*max)
        {
            *max = array[i];
        }
        if (array[i]<*min)
        {
            *min = array[i];
        }
    }
}
int main (void)
{
    int size;
    printf("Enter the size of the array: ");    //Declaration of array and intializing its values with the user's input
    scanf("%d",&size);                          
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Eneter elemet[%d]: ",i);
        scanf("%d",&array[i]);
    }
    int min,max;
    minmax(&min,&max,array,size);               //Passing the addreses of min and max values
    printf("The minimum value is %d and maximum value is %d",min,max);
    return 0;
}