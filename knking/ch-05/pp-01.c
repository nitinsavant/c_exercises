#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int digits;

    if (number <= -1000) {
        digits = 4;
    } else if (number <= -100) {
        digits = 3;
    } else if (number <= -10) {
        digits = 2;
    } else if (number < 10){
        digits = 1;
    } else if (number < 100) {
        digits = 2;
    } else if (number < 1000) {
        digits = 3;
    } else {
        digits = 4;
    }

    printf("The number %d has %d digits\n", number, digits);
}


