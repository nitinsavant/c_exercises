#include <stdio.h>

int count_spaces(const char *s) {
    int count = 0;

    while (*s) {
        if (*s++ == ' ')
            count++;
    }

    return count;
}

int main(void) {
    printf("%d\n", count_spaces("nitinsavant"));
}
