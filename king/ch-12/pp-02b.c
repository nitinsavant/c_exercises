#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void) {
    printf("Enter a message: ");

    char ch, msg[MAX_SIZE];
    char *p = msg;

    while ((ch = tolower(getchar())) != '\n') {
        if (ch >= 97 && ch <= 122) {
            *p = ch;
            p++;
        }
    }

    p--;
    char *q = msg;

    while (p >= msg) {
        if (*p != *q) {
            printf("Not a palindrome\n");
            return 0;
        }

        p--;
        q++;
    }

    printf("Palindrome\n");
}
