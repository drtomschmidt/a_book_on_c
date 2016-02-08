/*
    a program the book uses to help demonstrate redirection.
    The program outputs two characters for whatever character you type on
    the line below. Must use end-of-file Signal, like ctrl d, or ctrl c to terminate.
*/

#include <stdio.h>

int main(void)
{
    char c;
    while (scanf("%c", &c) == 1) {
       printf("%c", c);
       printf("%c", c);
    }
    return 0;
}
