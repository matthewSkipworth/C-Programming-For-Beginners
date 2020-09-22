#include <stdio.h>
#include <stdlib.h>

#include "include/item.h"

int main(void)
{

    printf(" -- ITEMS -- ");

    Item *newItem = NULL;

    newItem = (Item*) malloc(sizeof(Item));

    readItem(newItem);

    printItem(newItem);

    free(newItem);

    return 0;
}