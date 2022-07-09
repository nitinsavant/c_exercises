#include <stdio.h>

int main(void) {
    printf("Enter a sentence: ");

    char ch, term_char = 0, chars[10][10] = {0};
    int i = 0, j = 0;

    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            chars[i][j] = ch;
            j++;
        } else {
            j = 0;
            i++;
        }
    }

    ch = chars[i][--j];
    if (ch == '?' || ch == '!' || ch == '.') {
        term_char = ch;
        chars[i][j] = 0;
    }

    printf("Reversal of sentence: ");

    j = 0;

    while (i >= 0) {
        ch = chars[i][j];

        if (ch != 0) {
            putchar(ch);
            j++;
        } else {
            if (i != 0) {
                putchar(' ');
            }
            j = 0;
            i--;
        }
    }

    putchar(term_char);

    printf("\n");
}
