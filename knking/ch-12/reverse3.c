#include <stdio.h>

#define N 10

int main(void) {
    printf("Enter %d numbers: ", N);

    int *p, numbers[N];

    for (p = numbers; p < numbers + N; p++) {
        scanf("%d", p);
    }

    printf("In reverse order: ");

    for (p = numbers + N - 1; p >= numbers; p--) {
        printf("%d ", *p);
    }

    printf("\n");
}
