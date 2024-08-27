#include "matrixSum.h"
#include "print2.h"

void Matrix_sum (int* matrix1, int* matrix2, const int sizeY, const int sizeX)
{
    const int size_res_y = 4, size_res_x = 3;
    int result[size_res_y][size_res_x] = {};
    for (int y = 0; y < sizeY; ++y) {
        for (int x = 0; x < sizeX; ++x) {
            result[y][x] = *((int*)matrix1 + y*sizeX + x) + *((int*)matrix2 + y*sizeX + x);
        }
    }
    Print2((int*) result, size_res_y, size_res_x);
}
