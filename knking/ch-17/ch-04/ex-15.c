#include <stdio.h>

int main(void) {
    int i, j;

    // (a)
    i = 1, j = 2;
    i += j;
    printf("%d %d\n", i, j); // 3 2

    // (b)
    i--;
    printf("%d %d\n", i, j); // 2 2

    // (c)
    i * j / i;
    printf("%d %d\n", i, j); // 2 2

    // (d)
    i % ++j;
    printf("%d %d\n", i, j); // 2 3

}



