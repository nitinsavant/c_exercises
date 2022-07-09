#include <stdio.h>

#define SIZE 40

int main(void) {
    int fib_numbers[SIZE] = {0, 1};

    int i = 2;
    while (i < SIZE) {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
        i++;
    }

    for (i = 0; i < SIZE; i++) {
        printf("%d ", fib_numbers[i]);
    }

    printf("\n");
}
