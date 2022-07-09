#include <stdio.h>

#define N 5

int main(void) {
    double *p, ident[N][N] = {0};

    for (p = ident[0]; p < ident[0] + N * N; p += N + 1) {
        *p = 1.0;
    }

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%.1f ", ident[row][col]);
        }
        printf("\n");
    }
}
