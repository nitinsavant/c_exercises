#include <stdio.h>

void censor(char *s) {
    while (*s != '\0') {
        if (*s == 'f' && *(s + 1) == 'o' && *(s + 2) == 'o') {
            *s = *(s+1) = *(s+2) = 'x';
            s += 3;
        } else {
            s++;
        }
    }
}

int main(void) {
    char str[] = "food fool";
    censor(str);
    printf("%s\n", str);
}
