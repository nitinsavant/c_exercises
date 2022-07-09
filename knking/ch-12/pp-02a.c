#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void) {
    printf("Enter a message: ");

    char ch, msg[MAX_SIZE];
    int i = 0;

    while ((ch = tolower(getchar())) != '\n') {
        if (ch >= 97 && ch <= 122) {
            msg[i] = ch;
            i++;
        }
    }

    i--;
    int j = 0;

    while (i >= 0) {
        if (msg[i] != msg[j]) {
            printf("Not a palindrome\n");
            return 0;
        }

        i--;
        j++;
    }

    printf("Palindrome\n");
}
