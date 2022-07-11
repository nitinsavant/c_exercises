#include <stdio.h>

int expo(int base, int power) {
    int result = 1;

    while (power > 0) {
        result = result * base;
        power--;
    }

    return result;
}

int main(void) {
    int x, result;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    result = 3 * expo(x, 5) + 2 * expo(x, 4) - 5 * expo(x, 3) - expo(x, 2) + 7 * x - 6;

    printf("Result: %d\n", result);
}

