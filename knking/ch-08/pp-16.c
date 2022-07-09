#include <stdio.h>
#include <ctype.h>

int main(void) {
    short letters[26] = {0};
    char ch;

    printf("Enter first word: ");

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            char zero_idx_letter = tolower(ch) - 'a';
            letters[zero_idx_letter]++;
        }
    }

    printf("Enter second word: ");

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            char zero_idx_letter = tolower(ch) - 'a';
            letters[zero_idx_letter]--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (letters[i] > 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");
}
