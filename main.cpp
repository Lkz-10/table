#include <stdio.h>
#include <stdlib.h>

int Input(int** addr, int* line_lens, int nlines);
void Output(int** addr, int* line_lens, int nlines);

void Free(int** addr, int nlines);

int main()
{
    int nlines = 0;

    printf("Enter amount of lines:\n");
    scanf("%d", &nlines);

    int** addr = (int**) calloc(nlines, sizeof(int*));

    int* line_lens = (int*) calloc(nlines, sizeof(int));

    if (Input(addr, line_lens, nlines) == -1) {
        printf("Error while input\n");
        return 0;
    }

    Output(addr, line_lens, nlines);

    Free(addr, nlines);
    free(addr);
    free(line_lens);
}

int Input(int** addr, int* line_lens, int nlines) {

    for (int i = 0; i < nlines; ++i) {

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

void Output(int** addr, int* line_lens, int nlines)
{
    for (int i = 0; i < nlines; ++i) {
        for (int j = 0; j < line_lens[i]; j++) {
            printf("%3d ", addr[i][j]);
        }
        printf("\n");
    }
}

void Free(int** addr, int nlines)
{
    for (int i = 0; i < nlines; ++i) {
        free(addr[i]);
        addr[i] = NULL;
    }
}
