#include <stdio.h>

int main(void) {
    int input;

    printf("Enter a three-digit number: ");
    scanf("%d", &input);

    int firstDigit = input / 100;
    int lastTwoDigits = input % 100;
    int secondDigit = lastTwoDigits / 10;
    int thirdDigit = lastTwoDigits % 10;

    printf("Here's your number reversed: %d%d%d\n", thirdDigit, secondDigit, firstDigit);
}
