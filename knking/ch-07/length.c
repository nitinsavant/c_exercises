#include <stdio.h>

int main(void) {
    printf("Enter a message: ");

    int length = 0;

    while (getchar() != '\n') {
        length++;
    }

    printf("Your message was %d character(s) long.\n", length);
}
