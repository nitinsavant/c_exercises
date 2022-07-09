#include <stdio.h>

int main(void) {
    int *p, a[] = {1, 2, 3};
    p = a;

    printf("%d\n", p == a[0]);     // illegal (pointer and integer)
    printf("%d\n", p == &a[0]);    // true
    printf("%d\n", *p == a[0]);    // true
    printf("%d\n", p[0] == a[0]);  // true
}
