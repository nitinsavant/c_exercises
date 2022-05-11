#include <stdio.h>

int main(void) {
    int i, j, k;

    // (a)
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n\n", i); // 0 2

    // (b)
    i = 10, j = 5;
    printf("%d ", i++ - ++j);
    printf("%d\n\n", i); // 4 11

    // (c)
    i = 7, j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n\n", i, j); // 0 8 7

    // (d)
    i = 3, j = 4, k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n\n", i, j, k); // 3 4 5 4

}



