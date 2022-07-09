#include <stdio.h>

int main(void) {
    double n, sum = 0;

    printf("This program sums a series of floating-point numbers.\n");
    printf("Enter numbers (0 to terminate): ");

    do {
        scanf("%lf", &n);
        sum += n;
    } while (n != 0);

    printf("The sum is: %f\n", sum);
}
