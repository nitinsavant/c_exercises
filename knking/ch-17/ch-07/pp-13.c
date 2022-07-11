#include <stdio.h>


int main(void) {
    printf("Enter a sentence: ");

    char ch;
    double numLetters = 0.0;
    int numWords = 0;

    do {
        ch = getchar();

        if (ch == ' ' || ch == '\n') {
            numWords++;
        } else {
            numLetters++;
        }
    } while (ch != '\n');

    printf("Average word length: %.1lf\n", numLetters/numWords);
}
