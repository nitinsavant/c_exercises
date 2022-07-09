#include <stdio.h>

#define MAX_SIZE 100

void reverse(char *message) {
    char temp, *p1 = message, *p2 = message;

    while (*p2) {
        p2++;
    }

    p2--;

    while (p2 > p1) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}

int main(void) {
    printf("Enter a message: ");

    char ch, message[MAX_SIZE];
    char *p = message;

    while ((ch = getchar()) != '\n')
        *p++ = ch;
    *p = '\0';

    reverse(message);
    printf("Reversal is: %s\n", message);
}
