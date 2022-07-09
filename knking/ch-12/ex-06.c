#include <stdio.h>

int sum_array(const int a[], int n) {
    int sum = 0;
    int const *p;

    for (p = a; p < a + n; p++)
        sum += *p;
    return sum;
}

int main(void) {
    int a[] = {12, 13, 14};

    printf("%d\n", sum_array(a, 3));
}
