#include "matrixSum.h"

int main()
{
    const int sizeY = 4, sizeX = 3;
    int table1[sizeY][sizeX] = {{1, 3, 0}, {1, 1, 0}, {3, 3, 0}, {1, 8, 4}};
    int table2[sizeY][sizeX] = {{2, 4, 8}, {11, 66, 2}, {38, 2, 43}, {12, -34, 1}};

    Matrix_sum((int*)table1, (int*)table2, sizeY, sizeX);
}
