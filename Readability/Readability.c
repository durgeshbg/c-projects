#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main (void)
{
    int letters = 0;
    int words = 1;
    int sentences = 0;
    
    string text = get_string("Text:\n");
    int n = strlen(text);
    
    for(int i = 0; i < n; i++)                                             //Loop to count the no. of letters
    {
        if (isalpha(text[i]) || isdigit(text[i]))                          //Checking for alphabets and digits
        {
        letters++;
        }
    }
    for(int i=0;i<n;i++)                                                    //Loop to count the no. of words
    {
        if(isspace(text[i]))                                                //Checking for spaces
        {
            words++;
        }
    }
    for(int i=0;i<n;i++)                                                     //Loop to count the no. of sentences
    {
        if(text[i] == 33 || text[i] == 46 || text[i] == 63)                  // ASCII values of '!' = 33; '.' = 46; '?' = 63
        {
            sentences++;
        }
    }
    
    float answer = 0.0588 * (float)letters - 0.296 * (float)sentences - 15.8; //Calculating the reading level of the text
    int final = round(answer);
    
    if (answer < -1)                                                          //Printing the reading level of the text
    {
        printf("Below Garde 1");
    }
    else if (answer > 16)
    {
        printf("Grade: 16+");
    }
    else
    {
        printf("Grade: %i\n",final);
    }
}



