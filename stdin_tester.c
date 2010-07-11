/* Fooling around with STDIN. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    char blah;

    if(scanf("%c", &blah) != 1) {
        printf("Nope.\n");
        exit(1);
    }

    printf("You wrote %c. Nice moves.", blah);
    return 0;
}
