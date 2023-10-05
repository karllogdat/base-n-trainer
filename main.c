#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "binary.h"
#include "random.h"

int main(int argc, const char** argv)
{
    // Set seed for random number generator
    srand(time(NULL));

    if (argc > 1) {
        if (strcmp(argv[1], "bti") == 0) {
            for (int i = 0; i < (int) argv[2]; ++i) {
                BinToIntQuestion((int) argv[3]);
            }
        }
    }
}