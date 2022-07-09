#include <stdio.h>

int main(void) {
    int input, twenties, tens, fives;

    printf("Enter a dollar amount: ");
    scanf("%d", &input);

    twenties = input / 20;
    input = input % 20;
    tens = input / 10;
    input = input % 10;
    fives = input / 5;
    input = input % 5;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", input);
}

