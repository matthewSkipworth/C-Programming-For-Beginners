#include <stdio.h>
#include <stdlib.h>

#define LIMIT 256

int main(void)
{

    char * buffer = NULL;
    buffer = (char*) malloc(LIMIT);

    printf("\n\nEnter a string.");

    if (buffer != NULL)
    {
        fgets(buffer, LIMIT, stdin);
    }

    printf("\nYour string is %s", buffer);

    free(buffer);

    return 0;
}