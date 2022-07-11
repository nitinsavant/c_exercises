#include <stdio.h>

int digit(int n, int k) {
    int digit;

    for (int i = 1; i <= k; i++) {
        digit = n % 10;
        n /= 10;
    }

    return digit;
}

int main(void) {
    int n, k;
    printf("Enter a number and digit number:");

    scanf("%d %d", &n, &k);

    printf("The digit is: %d", digit(n, k));
    printf("\n");
}
