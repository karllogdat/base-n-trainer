#include <stdlib.h>
#include "random.h"

int randRanged(int lower, int upper)
{
    return rand() % ((upper - lower + 1) + lower);
}