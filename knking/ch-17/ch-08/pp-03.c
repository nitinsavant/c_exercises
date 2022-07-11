#include <stdio.h>
#include <stdbool.h>

int main(void) {
    long input, currentNumber;

    bool seen[10] = {false};
    int digit;

    do {
        printf("Enter a number: ");
        scanf("%ld", &input);

        currentNumber = input;

        while (currentNumber > 0) {
            digit = currentNumber % 10;

            if (seen[digit]) {
                printf("Repeated digit\n");
                return 0;
            }

            seen[digit] = true;

            currentNumber /= 10;
        }
    } while (input > 0);

    printf("No repeated digit\n");
}

