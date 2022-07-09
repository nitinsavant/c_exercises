#include <stdio.h>

int main(void) {
    int input;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    int fifthDigit = input % 8;
    int fourthDigit = input / 8 % 8;
    int thirdDigit = input / 8 / 8 % 8;
    int secondDigit = input / 8 / 8 / 8 % 8;
    int firstDigit = input / 8 / 8 / 8 / 8 % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);
}
