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
        string ptxt = get_string("Plain Text: ");                      //Takes plain text input from the user
        int plen = strlen(ptxt);                                       //Length of the plain text
        char encrypt[plen];                                            //Array of characters with the length of plain text
        char fullkey[plen];                                            //Variable to assign the new value of the key modified w.r.t plain text characters  

        for (int i = 0; i < plen; i++)                                 //Loop to convert the plain text to cipher text
        {
            if (isupper(ptxt[i]))                                      //Condition to check for upper case letters
            {
               ptxt[i] -= 65;                                          //Changing ASCII values of character into alphabetical index values
               fullkey[i] = toupper(key[i%klen]);                      //Modifying the original key to uppercase
               fullkey[i] -= 65;                                       //Changing ASCII values of character into alphabetical index values
               encrypt[i] = (ptxt[i] + fullkey[i]) % 26;          //Formula to change the plain text to cipher text
               encrypt[i] += 65;                                       //Changing alphabetical index values of character into ASCII values
            }
            else if (islower(ptxt[i]))                                 //Condition to check for upper case letters
            {
               ptxt[i] -= 97;                                          //Changing ASCII values of character into alphabetical index values
               fullkey[i] = tolower(key[i%klen]);                      //Modifying the original key to uppercase
               fullkey[i] -= 97;                                       //Changing ASCII values of character into alphabetical index values
               encrypt[i] = (ptxt[i] + fullkey[i]) % 26;          //Formula to change the plain text to cipher text
               encrypt[i] += 97;                                       //Changing alphabetical index values of character into ASCII values
            }
            else
            {
                encrypt[i] = ptxt[i];                                  //If the plain text contains any other charcaters other than alphabets no change is applied 
            } 
        }
        printf("Cipher Text: ");
        for (int i = 0; i < plen; i++)                                 //Printing the characters of the encrypted text one by one
        {
            printf("%c", encrypt[i]); 
        }
        printf("\n");
        return 0;
    }
}