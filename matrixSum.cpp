#include <assert.h>
#include <stdio.h>

#include "matrixSum.h"

void Matrix_sum (int* matrix1, int* matrix2, const int sizeY, const int sizeX)
{
    assert(matrix1);
    assert(matrix2);

    for (int y = 0; y < sizeY; ++y) {
        for (int x = 0; x < sizeX; ++x) {
            printf("%3d ", *((int*)matrix1 + y*sizeX + x) + *((int*)matrix2 + y*sizeX + x));
        }
        printf("\n");
    }
}
