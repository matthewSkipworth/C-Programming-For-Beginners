#include <stdio.h>

int main(void)
{

    puts("Number of bytes allocated for int, char, long, long long, double, and double long, respectively.");

    printf("\n%d",sizeof(int));
    printf("\n%d",sizeof(char));
    printf("\n%d",sizeof(long));
    printf("\n%d",sizeof(long long));
    printf("\n%d",sizeof(double));
    printf("\n%d",sizeof(long double));

    return 0;
}