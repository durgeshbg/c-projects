#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main (int argc, string argv[])
{
    bool validity = false;                                             //Assigning validity of the key
    int klen = strlen(argv[1]);                                        //Length of the key
    char key[klen];                                                    //Assigning an array of characters for the key inputed

    if (argc==2)                                                       //Condition to check if the contains any spaces
    {
        for (int i = 0; i < klen; i++)
        {
            if (isalpha(argv[1][i]))                                   //Condition to check that the key contains only alphabets
            {
                validity = true;
                key[i] = toupper(argv[1][i]);
            }
            else
            {
                printf("Usage: ./<file>.c <key> $Only Alphabets");     //Prompt for non-alphabetical character error
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./<file>.c <key> $No Spaces");                  //Prompt for space error
        return 1;
    }
      
    if (validity==true)                                                //Condition to check when the key is valid 
    {
        string ctxt = get_string("Cipher Text: ");                     //Takes cipher text input from the user
        int clen = strlen(ctxt);                                       //Length of the cipher text
        char decrypt[clen];                                            //Array of characters with the length of cipher text
        char fullkey[clen];                                            //Variable to assign the new value of the key modified w.r.t cipher text characters  

        for (int i = 0; i < clen; i++)                                 //Loop to convert the cipher text to plain text
        {
            if (isupper(ctxt[i]))                                      //Condition to check for upper case letters
            {
               ctxt[i] -= 65;                                          //Changing ASCII values of character into alphabetical index values
               fullkey[i] = toupper(key[i%klen]);                      //Modifying the original key to uppercase
               fullkey[i] -= 65;                                       //Changing ASCII values of character into alphabetical index values
               decrypt[i] = (ctxt[i] - fullkey[i] + 26) % 26;          //Formula to change the cipher text to plain text
               decrypt[i] += 65;                                       //Changing alphabetical index values of character into ASCII values
            }
            else if (islower(ctxt[i]))                                 //Condition to check for upper case letters
            {
               ctxt[i] -= 97;                                          //Changing ASCII values of character into alphabetical index values
               fullkey[i] = tolower(key[i%klen]);                      //Modifying the original key to uppercase
               fullkey[i] -= 97;                                       //Changing ASCII values of character into alphabetical index values
               decrypt[i] = (ctxt[i] - fullkey[i] + 26) % 26;          //Formula to change the cipher text to plain text
               decrypt[i] += 97;                                       //Changing alphabetical index values of character into ASCII values
            }
            else
            {
                decrypt[i] = ctxt[i];                                  //If the cipher text contains any other charcaters other than alphabets no change is applied 
            } 
        }
        printf("Plain Text: ");
        for (int i = 0; i < clen; i++)                                 //Printing the characters of the decrypted text one by one
        {
            printf("%c", decrypt[i]); 
        }
        printf("\n");
        return 0;
    }
}