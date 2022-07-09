#include <stdio.h>

int main(void) {
    int n = 5;

    if (n == 1-10)
        printf("n is between 1 and 10\n");

    // It's legal, but it doesn't do what was intended.
    // It's equivalent to this code below

    if (n == -9)
        printf("n is between 1 and 10\n");

    // When n = 5, the conditional expression returns false and prints nothing (which is not correct).
}