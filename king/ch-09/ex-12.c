#include <stdio.h>

double double_inner_product(double[], double[], int);

int main(void) {
    double a[] = {1, -3, 34, 89};
    double b[] = {2, -4, 5, 59};

    printf("Inner product: %f\n", double_inner_product(a, b, 4));
}

double double_inner_product(double a[], double b[], int n) {
    double result = 0;

    for (int i = 0; i < n; i++) {
        result += a[i] * b[i];
    }

    return result;
}

