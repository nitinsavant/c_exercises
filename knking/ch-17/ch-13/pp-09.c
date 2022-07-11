#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence) {
    int vowels = 0;
    while (*sentence) {
        switch (toupper(*sentence++)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++; break;
        }
    }
    return vowels;
}

int main(void) {
    char sentence[100];
    printf("Enter a sentence: ");

    char ch, *s = sentence;

    while ((ch = getchar()) != '\n')
        *s++ = toupper(ch);
    *s = '\0';

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
}
