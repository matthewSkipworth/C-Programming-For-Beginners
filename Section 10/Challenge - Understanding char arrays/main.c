#include "include/myString.h"
#include "include/menu.h"

void optionSelect(char (*)[], char(*)[]);

int main(void)
{
    
    drawMenu();

    char (*buff_ptr)[], (*cat_ptr)[], (*catstr_ptr)[];

    char buffer[128], catstr[256];

    buff_ptr = &buffer;
    catstr_ptr = &catstr;

    fgets(buffer, 128, stdin);

    printf("\nThe contents of buffer are: %s", (*buff_ptr));
    

    int len = myStrlen(buff_ptr);

    printf("\nThe length of the string is: %d", len);


    char cat[] ={'C','a','t'};
    cat_ptr = &cat;
    myStrcat (buff_ptr, cat_ptr, catstr_ptr);

    printf("\n%s", (*catstr_ptr));

    bool isMatch = myStrcmp(cat_ptr, buff_ptr);

    if (isMatch)
    {
        printf("\nMatch!");

    }
    else
    {
        printf("\nNot a match.");
    }
    


    return 0;
}

void optionSelect(char (*myString1)[], char (*myString2)[])
{
    char input_buffer[8];

    fgets(input_buffer, 8, stdin);

    switch(input_buffer[0])
    {
        case 1: 
        {
            int len = myStrlen(myString1);
            printf("\nThe length of the string is %d", len);
        } 
        
    }

}