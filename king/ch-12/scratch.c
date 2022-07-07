#include <stdio.h>

#define NUM_COLS 2
#define NUM_ROWS 2

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int b[3];

    *b++ = 5;
    *b++ = 6;
    *b++ = 7;

    for (int *p = b; p < b + 3; p++)
        printf("%d ", *p);
}
