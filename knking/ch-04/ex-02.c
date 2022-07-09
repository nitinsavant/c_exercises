#include <stdio.h>

int main(void) {
    int i, j;

    printf("%d\n", (-i) / j);

    printf("%d\n", - (i / j));

    // unary +/- has higher precedence than '/', so '-i / j' = '(-i) / j',
    // but the 2nd expression (above) uses parentheses to elevate the precedence of '/',
    // and since division is implementation-defined behavior in C89,
    // we can't guarantee that the expressions always evaluate to the same value.
    // In the C99 standard, however, it would be the same,
    // because division is always truncated to 0
}