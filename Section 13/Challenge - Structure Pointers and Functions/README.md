write a C program that creates a structure pointer and passes it to a function
    create a structure named itme with the following members
        itemName - pointer
        quantity - int
        price - float
        amount - float (stores quantity * price)

create a function named readItem that takes a structure pointer of type item as a parameter
    this function should read in (from the user) a product name, price, and quantity
    the contents read in should be stored in the passed in structure to the function

create a function named print item that takes as a parameter a structure pointer of type item
    function prints the contents of the parameter

the main function should declare an item and a pointer to the item
    you need to allocate memory for the itemName pointer
    the item pointer shoul be passed into both the read and print item functions