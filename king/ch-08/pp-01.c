#include <stdio.h>
#include <stdbool.h>

int main(void) {

    printf("Enter a number: ");

    long input;
    scanf("%ld", &input);

    bool arr[10] = {false};
    int digit;

    bool repeated[10] = {false};

    while (input > 0) {
        digit = input % 10;

        if (arr[digit]) {
            repeated[digit] = true;
        }

        arr[digit] = true;

        input /= 10;
    }

    printf("Repeated digit(s): ");

    for (int i = 0; i < 10; i++) {
        if (repeated[i]) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

