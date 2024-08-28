#include <stdio.h>
#include <stdlib.h>

int Input(int** addr, int* line_lens);
void Output(int** addr, int* line_lens);

void Free(int** addr);

const int global_nlines = 4;

int main()
{
    int* addr[global_nlines] = {};

    int line_lens[global_nlines] = {};

    if (Input(addr, line_lens) == -1) {
        printf("Error while input\n");
        return 0;
    }

    Output(addr, line_lens);

    Free(addr);
}

int Input(int** addr, int* line_lens) {
    for (int i = 0; i < global_nlines; ++i) {
        printf("Enter length of line %d:\n", i+1);
        scanf("%d", &(line_lens[i]));

        addr[i] = (int*) calloc(line_lens[i], sizeof(int));

        if (addr[i] == NULL) {
            printf("Error line %d\n", i+1);
            return -1;
        }

        printf("Enter line %d:\n", i+1);

        for (int j = 0; j < line_lens[i]; j++) {
            scanf("%d", addr[i] + j);
        }
    }
    return 0;
}

void Output(int** addr, int* line_lens)
{
    for (int i = 0; i < global_nlines; ++i) {
        for (int j = 0; j < line_lens[i]; j++) {
            printf("%3d ", *(addr[i] + j));
        }
        printf("\n");
    }
}

void Free(int** addr)
{
    for (int i = 0; i < global_nlines; ++i) {
        free(addr[i]);
        addr[i] = NULL;
    }
}
