#include <ctype.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    FILE *fptr;
    const char * fileName = "justSomeText.txt";
    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen; 
    int lineCount = 0;
    int charCount = 0;
    int i = 0;
    
    fptr = fopen(fileName, "r");

    if (fptr == NULL)
    {
        printf("\nCould not open file %s.", fileName);
    }


    while((linelen = getline(&line, &linecap,fptr)) > 0 )
    {
        for(i = 0; i < linelen; i++)
        {
            if(islower(line[i]))
            {
                printf("%c", line[i] - 32);
            }
            else
            {
                printf("%c", line[i]);
            }
        }

        charCount += linelen;
        lineCount++;
    }


    printf("\nnumber of lines: %d, number of characters: %d", lineCount, charCount);

    fclose(fptr);

    return 0;
}