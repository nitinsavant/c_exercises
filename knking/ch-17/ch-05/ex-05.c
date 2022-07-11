#include <stdio.h>

int main(void) {
    int n = 0;

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    // It's legal, but it doesn't do what was intended.
    // It's equivalent to this code below (because <= is right-associative)

    if ((n >= 1) <= 10)
        printf("n is between 1 and 10\n");

    // When n = 0, the conditional expression returns true and prints the statement (which is not correct).
}

