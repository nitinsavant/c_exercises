#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    printf("Enter a message: ");

    char ch, message[MAX_SIZE];
    char *p = message;

    while ((ch = getchar()) != '\n') {
        *p = ch;
        p++;
    }

    p--;

    printf("Reversal is: ");

    while (p >= message) {
        putchar(*p);
        p--;
    }

    printf("\n");
}
