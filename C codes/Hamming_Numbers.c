#include <stdint.h>
#include <stdlib.h>

uint64_t hamber(int n)
{
    if (n <= 0) return 0;
    if (n == 1) return 1;

    //Alloctae array to store the first n Hamming numbers
    uint64_t * hamming = (uint64_t*)malloc(n * sizeof(uint64_t));
    hamming[0] = 1; // First Hamming number is 1

    //Three pointers for multipe of 2, 3 and 5
    int i2 = 0, i3 = 0, i5 = 0;

    //Next multiples
    uint64_t next_2 = 2;
    uint64_t next_3 = 3;
    uint64_t next_5 = 5;


    for (int i = 1; i < n; i++)
    {
        uint64_t next_hamming = next_2;
        if (next_3 < next_hamming) next_hamming = next_3;
        if (next_5 < next_hamming) next_hamming = next_5;

        hamming[i] = next_hamming;

        //Update the pointers and next values
        if(next_hamming == next_2)
        {
            i2++;
            next_2 = hamming[i2] * 2;
        }
        if (next_hamming == next_3)
        {
            i3++;
            next_3 = hamming[i3] * 3;
        }
        if (next_hamming == next_5)
        {
            i5++;
            next_5 = hamming[i5] * 5;
        }

    }


    uint64_t result = hamming[n-1];
    free(hamming);
    return result;
}