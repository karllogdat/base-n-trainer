#include <math.h>
#include <stdio.h>
#include "binary.h"
#include "random.h"

// Black magic I don't understand
long long ConvertInttoBin(int integer)
{
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

// Takes difficulty(int) as a parameter
// Difficulty:
//  1 - 10 digits
//  2 - 100 digits
//  3 - 1000 digits
//  ...
void BinToIntQuestion(int difficulty)
{
    int mainInt = randRanged(
                    pow(10, difficulty - 1) + 1, 
                    pow(10, difficulty) - 1
                );

    int answer;

    printf(
        "Convert %lld to integer: ",
        ConvertInttoBin(mainInt)
    );

    scanf("%d", &answer);

    if (answer == mainInt) {
        printf("Correct!\n");
    } else if (answer != mainInt) {
        printf("Incorrect.\n");
    } else {
        printf("Invalid answer.\n");
    }
}

void IntToBinQuestion(int difficulty)
{
    int mainInt = randRanged(
                    pow(10, difficulty - 1) + 1, 
                    pow(10, difficulty) - 1
                );

    int answer;

    printf(
        "Convert %d to binary: ",
        mainInt
    );

    scanf("%lld", &answer);

    // DON'T REMOVE [code doesn't work without using this method]
    long long correctAnswer = ConvertInttoBin(mainInt);

    if (answer == correctAnswer) {
        printf("Correct!\n");
    } else if (answer != correctAnswer) {
        printf("Incorrect.\n");
        printf("Correct: %lld", correctAnswer);
    } else {
        printf("Invalid answer.");
    }
}