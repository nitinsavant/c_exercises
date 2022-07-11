#include <stdio.h>
#include <ctype.h>


int main(void) {
    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1,8,
                      5, 1, 3, 1, 1, 3, 10,1, 1, 1,
                      1, 4, 4, 8, 4, 10};

    char ch;

    printf("Enter a word: ");

    int sum = 0;

    while ((ch = getchar()) != '\n') {
        int val = toupper(ch) - 'A';
        sum += values[val];
    }

    printf("Scrabble value: %d\n", sum);
}
