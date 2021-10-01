#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int alen = get_int("Input the no of People: ");     //'alen' represents the lenght of the arrays
    int score[alen];                                    //Declaring no. of arrays for score
    int a=0;                                            //a represents the serial no. of the specific person
                                                        
    for(int i=0; i<alen; i++)                           //Array to input the scores of the people
    {
    a++;                                                //Serial no. of the person starting from '1'
    score[i]=get_int("Player %i: ", a);                 //Input score from the user
    }
    
    int sum=0;                                          //Initializing the value of the sum to '0'
    int k;                                              //No. of the people 
    for (k=0; k<alen; k++)                                 //Loop th calculate the sum of the scores
    {
        sum+=score[k];                     
    }
    printf("Sum of all the scores: %i\n", sum);         //To print the sum of all the scores

    float avg = (float)(sum/k);                         //Calculating the average of the scores
    printf("Average of the scores: %i\n", (int)avg);         //To print the average of all the scores
}