#include <stdio.h>

int main(void) {
    int input;
    int digits = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &input);

    if (input < 0) input = -input;

    do {
        input = input / 10;
        digits++;
    } while (input > 0);

    printf("The number has %d digit(s).\n", digits);
}
