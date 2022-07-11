#include <stdio.h>

int main(void) {
    printf("Enter an integer to determine the precision of the computation of e: ");

    int n;
    scanf("%d", &n);

    float result = 1;

    for (int i = 1, factorial = 1; i <= n; i++) {
        result += 1.0 / (factorial *= i);
    }

    printf("The value of e: %.10f\n", result);
}



