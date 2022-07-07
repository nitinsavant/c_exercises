#include <stdio.h>

#define LEN 5

int sum_two_dimensional_array(const int a[][LEN], int n) {
    const int *p;
    int sum = 0;

    for (p = a[0]; p < a[0] + LEN * n; p++) {
        sum += *p;
    }

    return sum;
}

int main(void) {
    int a[2][LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", sum_two_dimensional_array(a, 2));
}
