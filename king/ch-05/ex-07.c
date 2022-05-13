#include <stdio.h>

int main(void) {
    int i = 17, j = -17;

    printf("%d\n", i >= 0 ? i : -i); // 17
    printf("%d\n", j >= 0 ? j : -j); // 17
}


