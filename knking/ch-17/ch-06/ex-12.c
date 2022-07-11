#include <stdio.h>

int main(void) {
    int n = 25;
    int d;

    for (d = 2; (d * d) <= n; d++)
        if (n % d == 0)
            break;

    if (d * d > n) {
        printf("%d is prime!\n", n);
    } else {
        printf("%d is not prime...\n", n);
    }
}
