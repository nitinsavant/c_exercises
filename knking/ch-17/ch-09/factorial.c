#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int main(void) {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of %d: %d\n", n, factorial(n));
}
