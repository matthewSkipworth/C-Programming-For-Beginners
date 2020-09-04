#include <stdio.h>

int main(void)
{
    int num = 5;
    int * p = &num;

    printf("\nthe address of the pointer: %p \
    \nthe value of the pointer: %p \
    \nvalue at address: %d\n\n", &p, p, *p);
}