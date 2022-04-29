#include <stdio.h>

int main(void) {
    int i = 5, j = 3;
    printf("%d %d\n", i / j, i % j); // 1 2

    i = 2; j = 3;
    printf("%d\n", (i + 10) % j); // 0

    i = 7, j = 8;
    int k = 9;
    printf("%d\n", (i + 10) % k / j); // 1

    // 17 % 9 / 8 --> 17 % 1 = 0 <-- right associative answer
    // 17 % 9 / 8 --> 8 / 8 = 1 <-- left-associative is correct

    i = 1, j = 2; k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k); // 0

    // 6 % 4 / 3 --> 2 / 3 = 0
}