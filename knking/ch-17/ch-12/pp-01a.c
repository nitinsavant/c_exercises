#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    printf("Enter a message: ");

    int i = 0;
    char ch, message[MAX_SIZE];

    while ((ch = getchar()) != '\n') {
        message[i] = ch;
        i++;
    }

    i--;

    printf("Reversal is: ");

    while (i >= 0) {
        putchar(message[i]);
        i--;
    }

    printf("\n");
}
