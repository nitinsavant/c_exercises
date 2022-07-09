#include <stdio.h>
#include <stdbool.h>

int main(void) {

    printf("Enter a number: ");

    long input;
    scanf("%ld", &input);

    bool arr[10] = {false};
    int digit;

    while (input > 0) {
        digit = input % 10;

        if (arr[digit]) {
            break;
        }

        arr[digit] = true;

        input /= 10;
    }

    if (input > 0) {
        printf("Repeated digit\n");
    } else {
        printf("No repeated digit\n");
    }
}

