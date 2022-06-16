#include <stdio.h>

int main(void) {
    printf("Enter a sentence: ");

    char chars[100] = {0}, ch, term_char;
    int i = 0;

    while ((ch = getchar()) != '\n') {
        if (ch == '.' || ch == '?' || ch == '!') {
            term_char = ch;
            i--;
            break;
        }

        chars[i] = ch;
        i++;
    }

    printf("Reversal of sentence: ");

    int end = i;

    while (i >= 0) {
        int start = i;

        if (chars[i] == ' ' || i == 0) {
            if (i > 0)
                start++;

            for (int j = start; j <= end; j++) {
                putchar(chars[j]);
            }

            if (i > 0)
                putchar(' ');

            end = i - 1;
        }

        i--;
    }

    printf("%c\n", term_char);
}
