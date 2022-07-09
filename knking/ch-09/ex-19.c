#include <stdio.h>

void pb(int);

int main(void) {
    int n;
    printf("Enter number in decimal format: ");
    scanf("%d", &n);
    printf("Same number in binary format: ");
    pb(n);
    printf("\n");
}

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

