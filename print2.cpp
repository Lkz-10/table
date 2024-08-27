#include <stdio.h>

#include "print2.h"

void Print2 (int* matrix, const int sizeY, const int sizeX)
{
    const int max_len = 3;
    for (int y = 0; y < sizeY; ++y) {
        for (int x = 0; x < sizeX; ++x) {
            printf("%*d ", max_len, *((int*)matrix + y*sizeX + x));
        }
        printf("\n");
    }
}
