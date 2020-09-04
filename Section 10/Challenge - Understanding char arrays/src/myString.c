#include "../include/myString.h"


void getInputString(char (*myString)[])
{
    printf("\nEnter a string: ");
    
    fgets(myString)
}

int myStrlen(char (*myString)[])
{
    int i = 0;
    while((*myString)[i] != '\0')
    {
        i++;
    }

    return i-1;
}

void myStrcat(char (*myString1)[],char (*myString2)[],char (*result)[])
{
    int i = 0;

    for (i = 0; i < myStrlen(myString1); i++)
    {
        (*result)[i] = (*myString1)[i];
    }

    for (; i < (myStrlen(myString1) + myStrlen(myString2)); i++)
    {
        (*result)[i] = (*myString2)[i-myStrlen(myString1)];
    } 
}

bool myStrcmp(char (*myString1)[],char (*myString2)[])
{
    if (myStrlen(myString1) != myStrlen(myString2))
    {
        return false;
    }
    int i = 0;
    for (i = 0; i < myStrlen(myString1); i++)
    {
        if ((*myString1)[i] != (*myString2)[i])
        {
            return false;
        }
    }
    return true;
}