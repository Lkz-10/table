#include "1toXSum.h"

int OneToXSum (int a)
{
    if (a < 1) return 0;
    return a*(a + 1)/2;
}
