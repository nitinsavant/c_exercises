#include <stdio.h>

int main(void) {
    int *p, a[5] = {1, 2, 3, 4, 5};

    for (p = &a[0]; p < &a[5]; p++) {
        printf("%d ", *p);
    }
}
