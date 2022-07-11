#include <stdio.h>


int main(void) {

    char ch, firstInitial;

    printf("Enter a first and last name: ");

    firstInitial = getchar();

    while (getchar() != ' ')
        ; // skips remaining non-whitespace characters and then one whitespace character

    while ((ch = getchar()) != '\n') {
        putchar(ch);
    }

    printf(", %c.\n", firstInitial);
}
