#include <stdio.h>
#include "lib/prime_util.h"

#define MAX 100

int main(void)
{
    int *primes_ptr;
    int primes[MAX];

    primes_ptr = primes;

    populate_primes(MAX, primes_ptr);

    // printf("Size of primes = %d", sizeof(primes));
    display_primes(primes, MAX);

    return 0;
}