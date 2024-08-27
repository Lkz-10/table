#include <stdio.h>
#include <assert.h>

const int TEAMS_CNT = 4;

void Print (int* table);

int OneToXSum (int a);

int main()
{
    int table[] = {1, 3, 0, 1, 1, 0, 3, 3, 0, 1};

    Print(table);
}

void Print (int* table)
{
    assert(table);

    int cnt = 0;
    const int cnt_max = OneToXSum(TEAMS_CNT);

    for (int x = 0; x < TEAMS_CNT; ++x) {

        printf("Team %*d:    ", TEAMS_CNT/10 + 1, x + 1);

        for (int y = 0; y < x && cnt < cnt_max; ++y) {

            printf(" %2d", *(table + cnt));

            cnt++;
        }
        printf("  #\n");
    }
}

int OneToXSum (int a)
{
    if (a < 1) return 0;
    return a*(a + 1)/2;
}


