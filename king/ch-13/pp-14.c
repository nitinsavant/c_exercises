#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool are_anagrams(const char *word1, const char *word2) {
    short letters[26] = {0};

    while (*word1) {
        if (isalpha(*word1)) {
            char zero_idx_letter = tolower(*word1) - 'a';
            letters[zero_idx_letter]++;
        }
        word1++;
    }

    while (*word2) {
        if (isalpha(*word2)) {
            char zero_idx_letter = tolower(*word2) - 'a';
            letters[zero_idx_letter]--;
        }
        word2++;
    }

    for (int i = 0; i < 26; i++) {
        if (letters[i] > 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char word1[10], word2[10];

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

    if (are_anagrams(word1, word2)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

}
