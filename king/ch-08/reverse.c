#include <stdio.h>

#define N 10

int main(void) {
    printf("Enter %d numbers: ", N);

    int numbers[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("In reverse order: ");

    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}
