/*  Got a C version of guess the number working! Too bad the right number is hardcoded, since I don't know the math functions yet.
    Python 3 version: http://github.com/mblair/IYOCGwP/blob/master/chap4/guess.py */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int guess, number = 7, guesses = 0;

    printf("Please enter a number between 1 and 10.\n");

    while (guesses < 6) {
        if(scanf("%d", &guess) != 1) {
            printf("What are you doing?\n");
            exit(1);
        }

        if(guess < 7) {
            printf("Too low, try again.\n");
            guesses++;
        }

        if(guess > 7) {
            printf("Too high, try again.\n");
            guesses++;
        }

        if(guess == 7) {
            printf("Nice job!\n");
            exit(0);
        }
   }

    printf("Oh well.");
    return 0;
}
