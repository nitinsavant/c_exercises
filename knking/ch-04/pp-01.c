#include <stdio.h>

int main(void) {
    int input;
    printf("Enter a two-digit number: ");
    scanf("%d", &input);

    int firstDigit = input / 10;
    int secondDigit = input % 10;

    printf("Here's your number reversed: %d%d\n", secondDigit, firstDigit);
}
