/*
   There's a typo in the book on line 11 of this file, in the first printf call. 
   There should be commas in between arguments; in the book, there's no comma after the second argument.
   GCC 4.4 complains with (warning: too few arguments for format). 
   The program works, although a bunch of gibberish is printed on the newline before you type in your numbers. 
   
   This version of the source doesn't contain the error.
*/

#include <stdio.h>

int main(void) {
    char    c1, c2, c3;
    int     i;
    float   x;
    double  y;

    printf("\n%s\n%s", "Input three characters,", "an int, a float, and a double: \n");
    scanf("%c%c%c%d%f%lf", &c1, &c2, &c3, &i, &x, &y);
    printf("\nHere is the data that you typed in:\n");
    printf("%3c%3c%3c%5d%17e%17e\n\n", c1, c2, c3, i, x, y);
    return 0;
}
