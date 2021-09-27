#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    bool validity = false;                                // Sets the boolen value of validity 
    if (argc == 2)                                        //Checks for key validity if it exceeds more than 1 string
    {
        for(int i = 0, n = strlen(argv[1]); i < n; i++)   //Loop checks the validity for characters of the key
          {
            if (isdigit (argv[1][i]))                     // Returns true if the key contains only digits
            {
              validity = true;
            }
            else
            {
              printf("Usage: ./<file> 'key'\n");          //Prompt when the key is invalid
              return 1;
            }
          
        }
    }
    else
    {
        printf("Usage: ./<file> 'key'\n");                //Prompt when the key is invalid
        return 1;
    }
    if (validity==true)                                   //Executed when key is valid 
    {
    int key = atoi(argv[1]);                              //Converts the key entered into digit 
    string plaintext = get_string("Plain_Text: ");        //Takes input(plain text) from the user
    int n = strlen(plaintext);
    int encrypt[n];                                       //Declaring the required number of arrays for the encryted text
    
    for(int i = 0; i < n; i++)                            //Loop to convert the plain text into encrypted text
    {
        if(isupper(plaintext[i]))                         //Condition to check for upper case letters
        {
            
            plaintext[i] -= 65;                           //Changing ASCII values of character into alphabetical index values
            encrypt[i] = (plaintext[i] + key)%26;         //Shifting the alphabetical index values w.r.t the key
            encrypt[i] += 65;                             //Changing alphabetical index values of character into ASCII values
        }
        else if(islower(plaintext[i]))                    //Condition to check for lower case letters
        {
            plaintext[i] -= 97;                           //Changing ASCII values of character into alphabetical index values
            encrypt[i] = (plaintext[i] + key)%26;         //Shifting the alphabetical index values w.r.t the key
            encrypt[i] += 97;                             //Changing alphabetical index values of character into ASCII values
        }
        else
        {
            encrypt[i] = plaintext[i];                   //If the plain text contains any other charcaters other than alphabets no change is applied 
        }
    }
    
    printf("Encrypted_text: ");
    for(int i = 0; i < n; i++)
    {
        printf("%c", encrypt[i]);                        //Printing the characters of the encryted text one by one
    }
    printf("\n");
    return 0;
    }
}
