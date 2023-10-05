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

    if (argc == 2) {
        if (strcmp(argv[1], "help") == 0) {
            printf("./main [type] [# of questions] [difficulty]\n");
            printf("\n[type]\n \ti - integer\n \tb - binary\n");
            printf("\n[# of questions]\n \tThe number of questions the program will give the user\n");
            printf("\n[difficulty]\n \tThe number of digits in the answer or question (decimal)\n");
        }
    }
    else if (argc == 3) {
        printf("Incomplete arguments\n");
    }
    else if (argc == 4) {
        int numberOfQuestions = strtol(argv[2], NULL, 10);
        int difficulty = strtol(argv[3], NULL, 10);

        if (strcmp(argv[1], "bti") == 0) {
            for (int i = 0; i < numberOfQuestions; ++i) {
                BinToIntQuestion(difficulty);
            }
        }
        else if (strcmp(argv[1], "itb") == 0 ) {
            for (int i = 0; i < numberOfQuestions; ++i) {
                IntToBinQuestion(difficulty);
            }
        }
    }
}