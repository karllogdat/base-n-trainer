#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "binary.h"
#include "random.h"

int main(void)
{
    // Set seed for random number generator
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        BinToIntQuestion(2);
    }
}