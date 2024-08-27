#include <stdio.h>
#include <assert.h>

#include "trianglePrint.h"
#include "1toXSum.h"

void Print_triangle (int* table)
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
