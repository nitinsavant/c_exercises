#include <stdio.h>

int main(void) {
    int i;

    i = 0;
    printf("%d\n", i += 1); // Equivalent to i = i + 1; Sets i to i + 1; Returns i + 1

    i = 0;
    printf("%d\n", ++i); // Sets i to i + 1; Returns i + 1

    i = 0;
    printf("%d\n", i++); // Sets i to i + 1; Returns i

    // Therefore, ++i is exactly the same

}



