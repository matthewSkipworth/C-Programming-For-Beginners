#include "../lib/prime_util.h"

int is_prime(int val)
{
    int result = 0, i;

    for (i = 2; i < val; i++)
    {
        if (val % i == 0)
        {
            return result;
        }
    }

    result = 1; // not divisible by any values less than val
    return result;
}

void populate_primes(int max, int *primes_ptr)
{
    int i, j = 2;
    primes_ptr[0] = 2;
    primes_ptr[1] = 3;
    for (i = 4; i < max; i++)
    {
        if(is_prime(i))
        {
            primes_ptr[j] = i;
            j++;
        }
    }

}

void display_primes(int prime_array[], int arr_size)
{
    int i;
    
    printf("[ %d", prime_array[0]);

    for(i = 1; i < arr_size; i++)
    {
        // prime_array[i] == 0 ? break : printf(", %d", prime_array[i]);
        if (prime_array[i] == 0)
        {
            break;
        }
        printf(", %d", prime_array[i]);
    }
    puts(" ]");
}