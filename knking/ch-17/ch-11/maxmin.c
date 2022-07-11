#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
    int max, min, b[] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31};

    max_min(b, N, &max, &min);

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
}

void max_min(int a[], int n, int *max, int *min) {
    *max = *min = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }

        if (a[i] < *min) {
            *min = a[i];
        }
    }
}
