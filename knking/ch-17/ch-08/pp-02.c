#include <stdio.h>
#include <stdbool.h>

int main(void) {

    printf("Enter a number: ");

    long input;
    scanf("%ld", &input);

    int arr[10] = {0};

    int digit;

    while (input > 0) {
        digit = input % 10;

        arr[digit]++;

        input /= 10;
    }

    printf("Repeated digit(s): ");

    printf("\nDigit:       ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\nOccurrences: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

