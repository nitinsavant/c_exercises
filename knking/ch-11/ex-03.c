#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}

int main(void) {
    double avg, sum;
    double a[] = {1, 2, 3, 4, 5};
    avg_sum(a, 5, &avg, &sum);

    printf("Avg: %f\n", avg);
    printf("Sum: %f\n", sum);
}
