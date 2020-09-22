#ifndef _ITEM_H_
#define _ITEM_H_

typedef struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
} Item;

void readItem(Item *);
void printItem(Item *);
#endif