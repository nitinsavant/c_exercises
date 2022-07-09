#include <stdio.h>


int main(void) {
    int i = 0;
    char ch, first_initial, last_name_chars[20] = {0};

    printf("Enter a first and last name: ");

    first_initial = getchar();

    while (getchar() != ' ')
        ; // skips remaining non-whitespace characters and then one whitespace character

    while ((ch = getchar()) != '\n') {
        last_name_chars[i] = ch;
        i++;
    }

    printf("You entered the name: ");

    i = 0;

    while ((ch = last_name_chars[i]) != 0) {
        printf("%c", ch);
        i++;
    }

    printf(", %c.\n", first_initial);
}
