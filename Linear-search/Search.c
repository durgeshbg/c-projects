#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct                                                             //Defining data structure
{
  string name;
  string id;
  string ph;
}
info;

int main (void)
{
  int num = get_int("Give the no. of people: ");                           //Intialising the number of arrays to store the person's credentials
  info person[num];

  for (int i = 0; i < num; i++)                                            //Loop that collects the person's credentials
  {
    printf("Person[%i] credentials:\n",i+1);     
    person[i].name=get_string("Give the name: ");
    person[i].id=get_string("Give the ID: ");
    person[i].ph=get_string("Give the phone number: ");
    printf("\n");
  }

  for (int i = 1; i > 0 ; i++)                                             //Loop carry on the searching process forever
  {
    string givenname = get_string("Give the name of the person you are searching for: ");

    for (size_t i = 0; i < num; i++)                                       //Loop to search the person's credentials
      {
        if (strcmp(person[i].name, givenname)==0)
          {
            printf("%s's ID: %s\n%s's Phone number: %s\n",givenname ,person[i].id, givenname, person[i].ph);

            char ans=get_char("Press 'y' to search for another person: "); //Condition to break the forever loop
            if (ans != 'y')
            {
              return 0;
            }
            printf("\n");
          }
      }
  }
}