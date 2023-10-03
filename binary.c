#include <math.h>
#include "binary.h"

// Black magic I don't understand
long long ConvertInttoBin(int integer)
{
    // Storage for final binary
    long long binary = 0;

    int rem;
    int i = 1;

    while (integer != 0)
    {
        rem = integer % 2;
        integer /= 2;
        binary += rem * i;
        i *= 10;
    }

    return binary;
}

// More black magic
int ConvertBintoInt(long long binary)
{
    int decimal, i = 0;
    int rem;

    while (binary != 0)
    {
        rem = binary % 10;
        binary /= 10;
        decimal += rem*pow(2, i);
        ++i;
    }

    return decimal;
}

