#include <stdio.h>

int main(void) {

    int m, n, temp;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (1) {
        if (n == 0) {
            break;
        }

        temp = m % n;
        m = n;
        n = temp;
    }

    printf("Greatest common divisor: %d\n", m);
}
