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
    string ciphertext = get_string("Encrypted_Text: ");   //Takes input(encrypted text) from the user
    int n = strlen(ciphertext);
    int decrypt[n];                                       //Declaring the required number of arrays for the decrypted text
    
    for(int i = 0; i < n; i++)                            //Loop to convert the encrypted text into plain text
    {
        if(isupper(ciphertext[i]))                        //Condition to check for upper case letters
        {
            
            ciphertext[i] -= 65;                          //Changing ASCII values of character into alphabetical index values
            decrypt[i] = (ciphertext[i] - key)%26;        //Shifting the alphabetical index values w.r.t the key
            decrypt[i] += 65;                             //Changing alphabetical index values of character into ASCII values
        }
        else if(islower(ciphertext[i]))                   //Condition to check for lower case letters
        {
            ciphertext[i] -= 97;                          //Changing ASCII values of character into alphabetical index values
            decrypt[i] = (ciphertext[i] - key)%26;        //Shifting the alphabetical index values w.r.t the key
            decrypt[i] += 97;                             //Changing alphabetical index values of character into ASCII values
        }
        else
        {
            decrypt[i] = ciphertext[i];                   //If the encrypted text contains any other charcaters other than alphabets no change is applied 
        }
    }
    
    printf("Plain_text: ");
    for(int i = 0; i < n; i++)
    {
        printf("%c", decrypt[i]);                         //Printing the characters of the decrypted text one by one
    }
    printf("\n");
    return 0;
    }
}