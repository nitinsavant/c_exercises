#include <stdio.h>

int main(void) {
    int i, j, k;

    i = 10; j = 5;
    printf("%d\n", !i < j); // 1

    i = 2; j = 1;
    printf("%d\n", !!i + !j); // 1

    i = 5; j = 0;
    printf("%d\n", i && j); // 0

    i = 1, j = 2; k = 3;
    printf("%d\n", i < j || k); // 1
}
