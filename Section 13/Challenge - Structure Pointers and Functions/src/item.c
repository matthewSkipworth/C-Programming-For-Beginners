#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/item.h"

void readItem(Item *theItem)
{
    char theItemName[128], buffer[128];
    int theQuantity = 0;
    float thePrice = 0.0;

    
    printf("\nEnter item name: ");

    scanf("%s", buffer);
    theItem->itemName = (char *) malloc(strlen(buffer) + 1);

    strcpy(theItem->itemName, buffer);

    printf("\nEnter item quantity: ");
    scanf("%d", &theQuantity);
    theItem->quantity = theQuantity;
    
    printf("\nEnter item price: ");
    scanf("%f", &thePrice);
    theItem->price = thePrice;
}

void printItem(Item *theItem)
{
    printf("\n\n[name: %s, quantity: %d, price: %.2f]\n\n", theItem->itemName, theItem->quantity, theItem->price);

}