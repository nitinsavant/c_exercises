#include <stdio.h>

int main(void) {

    printf("Enter up to a three-digit number: ");

    int input;
    scanf("%d", &input);

    printf("Here's your number reversed: ");

    do {
        int digit = input % 10;
        input = input / 10;

        printf("%d", digit);
    } while (input > 0);

    printf("\n");
}
