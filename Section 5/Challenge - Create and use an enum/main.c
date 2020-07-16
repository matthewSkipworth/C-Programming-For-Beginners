#include <stdio.h>

int main(void)
{
    enum Company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    printf("%d\n%d\n%d", XEROX, GOOGLE, EBAY);

    puts("");
    return 0;
}