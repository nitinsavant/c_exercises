#include <stdio.h>

#define NUM_COLS 3
#define NUM_ROWS 2

int main(void) {
    int a[][NUM_COLS] = {{2, 3, 6}, {4, 5, 8}};

    int (*p)[NUM_COLS];

    for (p = a; p < a + NUM_ROWS; p++)
        printf("%d\n", (*p)[1]);
}
