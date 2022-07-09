#include <stdio.h>
#include <string.h>

char *duplicate(const char *p) {
    char *q;

    strcpy(q, p);

    return q;
}

int main(void) {
    printf("%s\n", duplicate("abc"));
}

// q needs to be declared as a string with some allocated space

